@class NSArray, STUIStatusBarIdentifier, STUIStatusBarDisplayItemPlacement;

@interface STUIStatusBarDisplayItemPlacementIndicatorsGroup : STUIStatusBarDisplayItemPlacementGroup

@property (class, readonly, nonatomic) STUIStatusBarIdentifier *activityItemDisplayIdentifier;

@property (readonly, copy, nonatomic) NSArray *stablePlacements;
@property (readonly, copy, nonatomic) NSArray *unstablePlacements;
@property (readonly, nonatomic) STUIStatusBarDisplayItemPlacement *bluetoothInsetPaddingItem;

+ (id)groupWithHighPriority:(long long)a0 lowPriority:(long long)a1 bluetoothPaddingInset:(double)a2;

- (void).cxx_destruct;

@end
