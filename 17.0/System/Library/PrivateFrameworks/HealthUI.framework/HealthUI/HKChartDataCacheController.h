@class HKActivitySummaryDataProvider, NSString, NSArray, HKHealthStore, NSMutableDictionary, HKUnitPreferenceController, NSMutableArray, HKSampleTypeUpdateController;

@interface HKChartDataCacheController : NSObject <HKSampleTypeUpdateControllerObserver> {
    NSArray *_chartCachesByTimeScopeAndDisplayTypeIdentifier;
    NSMutableDictionary *_chartCachesByDisplayTypeIdentifier;
    NSMutableArray *_chartCachesByCustomDisplayType;
    NSMutableDictionary *_currentValueDataProvidersByDisplayType;
    NSMutableDictionary *_alternateCurrentValueDataProvidersByDisplayType;
    NSMutableDictionary *_secondaryValueDataProviders;
    HKActivitySummaryDataProvider *_activitySummaryDataProvider;
}

@property (retain, nonatomic) HKSampleTypeUpdateController *updateController;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addCustomChartCache:(id)a0 forDisplayType:(id)a1;
- (id)findCustomCachesForDisplayType:(id)a0;
- (BOOL)_anySampleShouldInvalidateCache:(id)a0;
- (id)_chartCacheForDisplayType:(id)a0 timeScope:(long long)a1 chartCachesByDisplayTypeIdentifier:(id)a2;
- (id)_chartCacheIdentifiersFromSamples:(id)a0;
- (id)_chartCacheIdentifiersFromStartDate:(id)a0 endDate:(id)a1;
- (id)_createAlternateCurrentValueDataProviderForDisplayType:(id)a0 healthStore:(id)a1 updateController:(id)a2 dateCache:(id)a3;
- (id)_createCurrentValueDataProviderForDisplayType:(id)a0 healthStore:(id)a1 updateController:(id)a2 dateCache:(id)a3;
- (id)_generateChartCacheForDisplayType:(id)a0 timeScope:(long long)a1;
- (void)_removeCustomCachesForDisplayTypeIdentifier:(long long)a0;
- (void)_subscribeForUpdatesForDisplayType:(id)a0;
- (id)_timeScopeBasedChartCacheForDisplayType:(id)a0 timeScope:(long long)a1;
- (id)activitySummaryDataProviderWithHealthStore:(id)a0 dateCache:(id)a1 displayTypeController:(id)a2 unitController:(id)a3;
- (id)allInteractiveChartsCaches;
- (id)alternateCurrentValueDataProviderForDisplayType:(id)a0 healthStore:(id)a1 updateController:(id)a2 dateCache:(id)a3;
- (id)currentValueDataProviderForDisplayType:(id)a0 healthStore:(id)a1 updateController:(id)a2 dateCache:(id)a3;
- (id)initWithHealthStore:(id)a0 unitController:(id)a1 updateController:(id)a2;
- (id)interactiveChartsCacheForDisplayType:(id)a0 timeScope:(long long)a1;
- (void)removeCachesForDisplayTypeIdentifier:(long long)a0;
- (void)updateController:(id)a0 didReceiveHighFrequencyUpdateForType:(id)a1;
- (void)updateController:(id)a0 didReceiveUpdateForType:(id)a1 samplesAdded:(id)a2 objectsRemoved:(id)a3 recoveringFromError:(BOOL)a4;

@end
