@class STUIStatusBarStringView, STUIStatusBarStaticBatteryView, STUIStatusBarIdentifier, STUIStatusBarBatteryView, STUIStatusBarImageView;

@interface STUIStatusBarBatteryItem : STUIStatusBarItem

@property (class, readonly) STUIStatusBarIdentifier *iconDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *staticIconDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *chargingDisplayIdentifier;
@property (class, readonly) STUIStatusBarIdentifier *percentDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarBatteryView *batteryView;
@property (retain, nonatomic) STUIStatusBarStaticBatteryView *staticBatteryView;
@property (retain, nonatomic) STUIStatusBarImageView *chargingView;
@property (retain, nonatomic) STUIStatusBarStringView *percentView;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL usesCondensedPercentageDisplay;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (id)dependentEntryKeys;
- (void)_create_batteryView;
- (void)_create_percentView;
- (void)_create_chargingView;
- (void)_create_staticBatteryView;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;

@end
