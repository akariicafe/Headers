@interface HUPrimaryUserSettingsItemModuleController : HUItemModuleController

- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;
- (id)updatePrimaryUserSelectionType:(unsigned long long)a0 user:(id)a1;

@end
