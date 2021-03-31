modded class PlayerBase
{
    override bool DropEntityImpl(InventoryMode mode, notnull EntityAI owner, notnull EntityAI item)
	{
		bool value = super.DropEntityImpl(mode, owner, item);
		if (value) {
			PlayItemMoveSound(item);
		}
		
		return value;
	}
		
	override bool TakeToDstImpl(InventoryMode mode, notnull InventoryLocation src, notnull InventoryLocation dst)
	{
		bool value = super.TakeToDstImpl(mode, src, dst);	
		if (value) {
			PlayItemMoveSound(src.GetItem());
		}
		
		return value;
	}
	
	override bool TakeEntityAsAttachmentImpl(InventoryMode mode, notnull EntityAI item)
	{
		bool value = super.TakeEntityAsAttachmentImpl(mode, item);	
		if (value) {
			PlayItemMoveSound(item);
		}
		
		return value;
	}
	
	override bool TakeEntityAsAttachmentExImpl(InventoryMode mode, notnull EntityAI item, int slot)
	{
		bool value = super.TakeEntityAsAttachmentExImpl(mode, item, slot);	
		if (value) {
			PlayItemMoveSound(item);
		}
		
		return value;
	}
	
	override bool TakeEntityToTargetAttachmentExImpl(InventoryMode mode, notnull EntityAI target, notnull EntityAI item, int slot)
	{
		bool value = super.TakeEntityToTargetAttachmentExImpl(mode, target, item, slot);	
		if (value) {
			PlayItemMoveSound(item);
		}
		
		return value;
	}
	
	override bool TakeEntityToTargetAttachmentImpl(InventoryMode mode, notnull EntityAI target, notnull EntityAI item)
	{
		bool value = super.TakeEntityToTargetAttachmentImpl(mode, target, item);	
		if (value) {
			PlayItemMoveSound(target);
		}
		
		return value;
	}
	
	override bool SwapEntitiesImpl(InventoryMode mode, notnull EntityAI item1, notnull EntityAI item2)
	{
		bool value = super.SwapEntitiesImpl(mode, item1, item2);	
		if (value) {
			PlayItemMoveSound(item1);
		}
		
		return value;
	}
	
	private void PlayItemMoveSound(notnull EntityAI item)
	{
		if (!GetGame().IsClient() && GetGame().IsMultiplayer()) return;
		TStringArray sounds = {};
		item.ConfigGetTextArray("ItemMoveSounds", sounds);		
		// todo server side
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