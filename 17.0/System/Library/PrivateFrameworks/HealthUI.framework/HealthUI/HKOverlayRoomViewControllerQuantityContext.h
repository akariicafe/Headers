@class NSString, HKDisplayType;
@protocol HKOverlayRoomViewControllerIntegratedContextDelegate;

@interface HKOverlayRoomViewControllerQuantityContext : HKOverlayRoomViewControllerIntegratedContext

@property (retain, nonatomic) NSString *quantityTypeIdentifier;
@property (weak, nonatomic) id<HKOverlayRoomViewControllerIntegratedContextDelegate> optionalDelegate;
@property (nonatomic) long long options;
@property (retain, nonatomic) HKDisplayType *optionalBaseDisplayType;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)baseDisplayTypeForOverlay:(long long)a0;
- (void)prepareContextForDateInterval:(id)a0 overlayController:(id)a1 timeScope:(long long)a2 resolution:(long long)a3;
- (long long)resolutionForTimeScope:(long long)a0 traitResolution:(long long)a1;
- (void)fetchCachedDataForTimeScope:(long long)a0 resolution:(long long)a1 dateInterval:(id)a2 completion:(id /* block */)a3;
- (id)initWithQuantityIdentifier:(id)a0 overlayChartController:(id)a1 applicationItems:(id)a2 optionalDelegate:(id)a3 seriesOptions:(long long)a4 mode:(long long)a5 optionalBaseDisplayType:(id)a6;
- (id)buildContextItemWithValue:(id)a0 unit:(id)a1 valueContext:(id)a2 forTimeScope:(long long)a3 isUnitIncludedInValue:(BOOL)a4;
- (id)buildOverlayDisplayTypeForTimeScope:(long long)a0;
- (id)representativeDisplayType;
- (id)unitString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueContextString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2;
- (id)valueString:(id)a0 applicationItems:(id)a1 representativeDisplayType:(id)a2 isUnitIncludedInValue:(BOOL *)a3;

@end
