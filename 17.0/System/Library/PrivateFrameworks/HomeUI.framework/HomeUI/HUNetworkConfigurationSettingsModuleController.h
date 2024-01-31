@class NSString;

@interface HUNetworkConfigurationSettingsModuleController : HUItemModuleController <HUNetworkConfigurationSettingsModuleDelegate, HUTappableTextViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModule:(id)a0;
- (BOOL)canSelectItem:(id)a0;
- (unsigned long long)didSelectItem:(id)a0;
- (void)_presentNetworkConfigurationSettingsMismatchViewController;
- (Class)cellClassForItem:(id)a0;
- (void)networkConfigurationSettingsModuleUpdateDidTimeout:(id)a0;
- (void)tappableTextView:(id)a0 tappedAtIndex:(unsigned long long)a1 withAttributes:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 animated:(BOOL)a2;

@end
