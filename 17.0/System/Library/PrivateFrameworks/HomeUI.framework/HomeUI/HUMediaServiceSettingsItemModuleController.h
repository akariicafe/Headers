@protocol HUMediaServiceSettingsItemModuleControllerDelegate;

@interface HUMediaServiceSettingsItemModuleController : HUItemModuleController

@property (weak, nonatomic) id<HUMediaServiceSettingsItemModuleControllerDelegate> delegate;

- (void).cxx_destruct;
- (unsigned long long)didSelectItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
