modded class ItemBase
{
	// Settings
	static const float MAX_SOUND_RANGE = 25; // Mainly in place to stop bleed at long range
	static const float MIN_SOUND_VOLUME = 0.4;
	static const float MAX_SOUND_VOLUME = 0.9;
	static const int MAX_ITEM_AREA = 24;
	
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		super.EEItemLocationChanged(oldLoc, newLoc);
		if (!oldLoc || !newLoc) {
			return;
		}

		if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN) {
			return;
		}
		
		if (GetGame().IsServer() && GetGame().IsMultiplayer()) {
			return;
		}
		
		if (GetGame().GetPlayer() && vector.Distance(GetPosition(), GetGame().GetPlayer().GetPosition()) > MAX_SOUND_RANGE) {
			return;
		}

		PlayItemMoveSound(this);
	}
	
	private void PlayItemMoveSound(notnull EntityAI item)
	{
		TStringArray sounds = {};
		item.ConfigGetTextArray("ItemMoveSounds", sounds);		
	
		float sound_volume = Math.Clamp(GetItemArea(item) / MAX_ITEM_AREA, MIN_SOUND_VOLUME, MAX_SOUND_VOLUME);
		EffectSound sound = SEffectManager.CreateSound(sounds.GetRandomElement(), GetPosition());
		if (sound) {
			sound.SetSoundAutodestroy(true);
			sound.SoundPlay();
			if (sound.IMSGetWave()) {
				sound.IMSGetWave().SetVolume(sound_volume);
			}
		}
		
		EffectSound move_sound = SEffectManager.CreateSound("IMS_Item_Move_Regular", GetPosition());
		if (move_sound) {
			move_sound.SetSoundAutodestroy(true);
			move_sound.SoundPlay();
			if (move_sound.IMSGetWave()) {
				move_sound.IMSGetWave().SetVolume(sound_volume);
			}
		}
	}
	
	static int GetItemArea(notnull EntityAI item)
	{
		int area = 1;
		TIntArray item_size = {};
		item.ConfigGetIntArray("itemSize", item_size);
		foreach (int item_s: item_size) {
			area *= item_s;
		}
		
		return area;
	}
}