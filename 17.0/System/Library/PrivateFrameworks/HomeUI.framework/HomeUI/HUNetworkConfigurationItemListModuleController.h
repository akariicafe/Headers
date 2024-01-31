@interface HUNetworkConfigurationItemListModuleController : HUItemModuleController

@property (readonly, nonatomic) unsigned long long style;

- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (id)_viewControllerToPresentForNetworkConfigurationGroupItem:(id)a0;
- (Class)cellClassForItem:(id)a0;
- (id)initWithModule:(id)a0 style:(unsigned long long)a1;
- (id)presentNetworkConfigurationSettingsForItem:(id)a0 animated:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
