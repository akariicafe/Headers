@class RTMapServiceManager, NSString, RTPersonalizationPortraitManager, RTMapItemProviderProactiveExpertsParameters;

@interface RTMapItemProviderProactiveExperts : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTPersonalizationPortraitManager *personalizationPortraitManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, copy, nonatomic) RTMapItemProviderProactiveExpertsParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)_recentLocationsFrom:(id)a0 error:(id *)a1;
- (id)init;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapServiceManager:(id)a2 personalizationPortraitManager:(id)a3;
- (id)_filterConnectionLocations:(id)a0 location:(id)a1 distance:(double)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)_mapItemsWithConnectionsLocations:(id)a0 options:(id)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapServiceManager:(id)a2 parameters:(id)a3 personalizationPortraitManager:(id)a4;

@end
