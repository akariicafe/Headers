@class HKSampleTypeUpdateController, HKInteractiveChartDataFormatter, HKChartDataCacheController, HKHealthStore, HKUnitPreferenceController, _HKWheelchairUseCharacteristicCache, HKSampleTypeDateRangeController, HKSelectedTimeScopeController, NSMutableDictionary, HKDateCache, HKDisplayTypeController;
@protocol HKFeatureAvailabilityHealthDataSource, HKSleepDataSourceProvider, HKAddDataViewControllerProvider;

@interface HKHealthChartFactory : NSObject <HKHealthChartFactoryViewControllerProvider> {
    NSMutableDictionary *_customViewControllerProvidersByTypeIdentifier;
}

@property (readonly, nonatomic) _HKWheelchairUseCharacteristicCache *wheelchairUseCharacteristicCache;
@property (nonatomic) BOOL turnOffInitialSelectionForTesting;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController;
@property (readonly, nonatomic) HKUnitPreferenceController *unitPreferenceController;
@property (readonly, nonatomic) HKDateCache *dateCache;
@property (readonly, nonatomic) HKChartDataCacheController *chartDataCacheController;
@property (readonly, nonatomic) HKSampleTypeUpdateController *sampleTypeUpdateController;
@property (readonly, nonatomic) HKSampleTypeDateRangeController *sampleTypeDateRangeController;
@property (readonly, nonatomic) HKSelectedTimeScopeController *selectedTimeScopeController;
@property (retain, nonatomic) id<HKSleepDataSourceProvider> sleepDataSourceProvider;
@property (retain, nonatomic) HKInteractiveChartDataFormatter *sleepChartFormatter;
@property (retain, nonatomic) id<HKAddDataViewControllerProvider> addDataViewControllerProvider;
@property (retain, nonatomic) id<HKFeatureAvailabilityHealthDataSource> featureAvailabilityHealthDataSource;

- (id)init;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (id)supportedTypeIdentifiers;
- (id)interactiveChartForTypeIdentifier:(id)a0 preferredOverlay:(long long)a1 chartOptions:(unsigned long long)a2 displayDateInterval:(id)a3 restorationUserActivity:(id)a4 chartSummaryTrendModel:(id)a5;
- (id)remoteInteractiveChartForTypeIdentifier:(id)a0 model:(id)a1 chartSummaryTrendModel:(id)a2 displayDate:(id)a3;
- (void)updateChartSummaryTrendModel:(id)a0 viewController:(id)a1;
- (id)CHRRoomApplicationItems;
- (id)createDisplayTypeForSleepStages;
- (id)_buildApplicationItems;
- (id)_buildStandardRemoteChartViewControllerWithDisplayType:(id)a0 timeScopeRanges:(id)a1 initialTimeScope:(long long)a2 firstWeekday:(long long)a3 displayDate:(id)a4;
- (id)_buildSummaryTrendOverlayChartViewControllerWithDisplayType:(id)a0 timeScopeRanges:(id)a1 initialTimeScope:(long long)a2 chartSummaryTrendModel:(id)a3 firstWeekday:(long long)a4 displayDate:(id)a5;
- (id)_cardioFitnessDataSourcesForDisplayType:(id)a0 forTimeScopes:(id)a1;
- (id)_createSleepDisplayTypeForSeriesType:(long long)a0;
- (id)_defaultRemoteDataSourcesForDisplayType:(id)a0 forTimeScopes:(id)a1;
- (id)_displayTypeForTypeIdentifier:(id)a0;
- (void)_executeFetchOrSkipForTimeScopes:(id)a0 timeScope:(long long)a1 audience:(unsigned long long)a2 displayType:(id)a3 remoteDateIntervals:(id)a4 dataSources:(id)a5 gregorianCalendar:(id)a6 completion:(id /* block */)a7;
- (id)_remoteCalendarOverrideForDisplayType:(id)a0;
- (id)_remoteChartDisplayTypeForTypeIdentifier:(id)a0;
- (id)_remoteCustomFormatterForDisplayType:(id)a0;
- (id)_remoteDataSourcesForDisplayType:(id)a0 forTimeScopes:(id)a1;
- (id)_remoteDataSourcesForDisplayType:(id)a0 forTimeScopes:(id)a1 audience:(id)a2;
- (id)_remoteDisplayTypeConfigurationFromDataSources:(id)a0 model:(id)a1 originalDisplayType:(id)a2;
- (id)_remoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (id)_remoteStatisticsIntervalForDisplayType:(id)a0 timeScope:(long long)a1;
- (id)_resolvedDisplayDateForDisplayType:(id)a0 displayDate:(id)a1 timeScope:(long long)a2 gregorianCalendar:(id)a3;
- (long long)_resolvedTimeScopeForTypeIdentifier:(id)a0 displayDateInterval:(id)a1;
- (id)_sleepRemoteDataSourcesForDisplayType:(id)a0 forTimeScopes:(id)a1 audience:(id)a2;
- (id)_sleepRemoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (long long)_sourceFirstWeekdayFromModel:(id)a0;
- (id)_sourceTimeZoneFromModel:(id)a0;
- (id)_standardRemoteGraphSeriesForDisplayType:(id)a0 graphSeriesDataSource:(id)a1 timeScope:(long long)a2;
- (id)activityChartForActivityMoveMode:(long long)a0 displayDate:(id)a1 activityOptions:(unsigned long long)a2 chartSharableModel:(id)a3;
- (id)chartFactoryViewControllerProviderForType:(id)a0 standardProvider:(id)a1;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2;
- (id)chartForTypeIdentifier:(id)a0 dateRange:(id)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 disableXAxis:(BOOL)a3 currentCalendar:(id)a4;
- (id)createDisplayTypeForSleepDuration;
- (id)createInteractiveChartForSimpleDisplayType:(id)a0 chartOptions:(unsigned long long)a1;
- (id)createInteractiveChartViewControllerForTypeIdentifier:(id)a0 chartFactory:(id)a1 applicationItems:(id)a2 displayDate:(id)a3 preferredOverlay:(long long)a4 restorationUserActivity:(id)a5 trendModel:(id)a6 additionalChartOptions:(unsigned long long)a7;
- (void)encodeActivityChartDataForActivityMoveMode:(long long)a0 completion:(id /* block */)a1;
- (void)encodeChartQueryDataForTypeIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)encodeChartQueryDataForTypeIdentifier:(id)a0 forTimeScopes:(id)a1 timeScopeReferenceDate:(id)a2 audience:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (id)interactiveChartForTypeIdentifier:(id)a0 preferredOverlay:(long long)a1 displayDateInterval:(id)a2 restorationUserActivity:(id)a3 chartSummaryTrendModel:(id)a4;
- (id)internalChartDataCacheController;
- (void)internalDisableInitialSelectionForTesting:(BOOL)a0;
- (id)internalUnitPreferenceController;
- (void)registerInteractiveChartViewControllerProvider:(id)a0 typeIdentifier:(id)a1;
- (id)standardChartDisplayTypeIdentifierForTypeIdentifier:(id)a0;

@end
