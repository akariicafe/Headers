@class STUIStatusBarDisplayItemPlacement;

@interface STUIStatusBarDisplayItemPlacementWifiGroup : STUIStatusBarDisplayItemPlacementGroup

@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *iconPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *rawPlacement;

- (void).cxx_destruct;

@end
