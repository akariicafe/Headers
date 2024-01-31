@class STUIStatusBarDisplayItemPlacement, NSArray;

@interface STUIStatusBarDisplayItemPlacementCellularGroup : STUIStatusBarDisplayItemPlacementGroup

@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *signalStrengthPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *warningPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *typePlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *namePlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *callForwardingPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *badgePlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *rawPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *dualSignalStrengthPlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *dualNamePlacement;
@property (retain, nonatomic) STUIStatusBarDisplayItemPlacement *dualNameAndTypePlacement;
@property (retain, nonatomic) NSArray *placementsAffectedByAirplaneMode;

- (void).cxx_destruct;

@end
