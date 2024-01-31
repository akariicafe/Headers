@class NSDictionary, HKInteractiveChartOverlayPredicate;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerDistributionContext : HKOverlayRoomViewControllerIntegratedContext

@property (nonatomic) long long distributionStyle;
@property (weak, nonatomic) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;
@property (nonatomic) long long options;
@property (retain, nonatomic) HKInteractiveChartOverlayPredicate *namedPredicate;
@property (retain, nonatomic) NSDictionary *styleToMetricColors;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)resolutionForTimeScope:(long long)a0 traitResolution:(long long)a1;
- (void)fetchCachedDataForTimeScope:(long long)a0 resolution:(long long)a1 dateInterval:(id)a2 completion:(id /* block */)a3;
- (id)_computeTitleAndIdentifierFromStyleAndPredicate;
- (id)_representativeDisplayTypeForStyle:(long long)a0;
- (id)_selectedMetricColorsForDistributionStyle:(long long)a0;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3 isUnitIncludedInValue:(BOOL)a4;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)a0;
- (id)initWithStyle:(long long)a0 namedPredicate:(id)a1 overlayChartController:(id)a2 applicationItems:(id)a3 optionalDelegate:(id)a4 options:(long long)a5 mode:(long long)a6;
- (id)representativeDisplayType;
- (id)unitString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2 isUnitIncludedInValue:(BOOL *)a3;

@end
