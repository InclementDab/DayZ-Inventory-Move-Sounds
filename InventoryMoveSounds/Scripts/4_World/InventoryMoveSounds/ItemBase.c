modded class ItemBase
{
	// Settings
	static const float MAX_SOUND_RANGE = 25; // Mainly in place to stop bleed at long range
	static const float MIN_SOUND_VOLUME = 0.45;
	static const float MAX_SOUND_VOLUME = 0.85;
	static const int MAX_ITEM_AREA = 12;
	
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		super.EEItemLocationChanged(oldLoc, newLoc);
		
		if (GetGame().IsServer() && GetGame().IsMultiplayer()) {
			return;
		}
		
		if (!oldLoc || !newLoc) {
			return;
		}

		if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN) {
			return;
		}
		
		if (GetGame().GetPlayer() && vector.Distance(GetPosition(), GetGame().GetPlayer().GetPosition()) > MAX_SOUND_RANGE) {
			return;
		}

		array<string> sounds = {};
		ConfigGetTextArray("ItemMoveSounds", sounds);		
	
		float volume = ConfigGetFloat("ItemMoveSoundVolume");
		EffectSound sound = SEffectManager.CreateSound(sounds.GetRandomElement(), GetPosition());
		if (sound) {
			sound.SetSoundAutodestroy(true);
			sound.SoundPlay();
			if (sound.IMSGetWave()) {
				sound.IMSGetWave().SetVolume(volume);
			}
		}
		
		float sound_volume = Math.Clamp(GetItemArea(this) / MAX_ITEM_AREA, MIN_SOUND_VOLUME, MAX_SOUND_VOLUME);
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