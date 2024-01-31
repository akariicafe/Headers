@class STUIStatusBarIdentifier, STUIStatusBarImageView;

@interface STUIStatusBarBluetoothItem : STUIStatusBarIndicatorItem

@property (class, readonly) STUIStatusBarIdentifier *batteryDisplayIdentifier;

@property (retain, nonatomic) STUIStatusBarImageView *batteryImageView;

+ (BOOL)alwaysShowRegulatoryBluetoothIndicator;

- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (void)_create_batteryImageView;
- (id)indicatorEntryKey;
- (id)_batteryFillColorForEntry:(id)a0 usingTintColor:(id)a1;
- (void).cxx_destruct;
- (id)viewForIdentifier:(id)a0;
- (id)systemImageNameForUpdate:(id)a0;

@end
