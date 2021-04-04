modded class ItemBase
{
	override void EEItemLocationChanged(notnull InventoryLocation oldLoc, notnull InventoryLocation newLoc)
	{
		super.EEItemLocationChanged(oldLoc, newLoc);
		if (!oldLoc || !newLoc) {
			return;
		}

		if (oldLoc.GetType() == InventoryLocationType.UNKNOWN || newLoc.GetType() == InventoryLocationType.UNKNOWN) {
			return;
		}
		
		if (GetGame().IsServer()) {
			return;
		}

		PlayItemMoveSound(this);
	}
	
	private void PlayItemMoveSound(notnull EntityAI item)
	{
		TStringArray sounds = {};
		item.ConfigGetTextArray("ItemMoveSounds", sounds);		
	
		EffectSound sound = SEffectManager.PlaySoundOnObject(sounds.GetRandomElement(), this);
		if (sound) {
			sound.SetSoundVolume(Math.Clamp(GetItemArea(item) / 9, 0, 1));
			sound.SetSoundAutodestroy(true);
		}
		
		EffectSound move_sound = SEffectManager.PlaySoundOnObject("IMS_Item_Move_Regular", this);
		if (move_sound) {
			move_sound.SetSoundAutodestroy(true);
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