@class NSString, HKMCDaySummaryObserverQuery, HKHealthStore, HKSampleIteratorQuery, HKCalendarCache, NSMutableSet, _HKDatabaseChangesQuery, NSObject, NSMutableIndexSet;
@protocol HKMCViewModelProviderDataSourceDelegate, OS_dispatch_queue;

@interface HKMCViewModelProviderDataSource : NSObject <HKMCViewModelProviderDataSource> {
    HKHealthStore *_healthStore;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_summaryQueries;
    HKMCDaySummaryObserverQuery *_summaryObserverQuery;
    HKSampleIteratorQuery *_factorQuery;
    _HKDatabaseChangesQuery *_factorObserverQuery;
    NSMutableIndexSet *_canceledDayIndexes;
    HKCalendarCache *_calendarCache;
}

@property (weak, nonatomic) id<HKMCViewModelProviderDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handleCycleFactorsSampleTypeChanges:(id)a0 error:(id)a1;
- (void)_handleDaySummaryObserverUpdateWithError:(id)a0;
- (void)_startObservingCycleFactorsUpdates;
- (void)_startObservingDaySummaryUpdates;
- (void)cancelFetchForDaySummariesInDayIndexRange:(struct { long long x0; long long x1; })a0;
- (void)fetchCycleFactorsInDayIndexRange:(struct { long long x0; long long x1; })a0;
- (void)fetchDaySummariesInDayIndexRange:(struct { long long x0; long long x1; })a0;
- (id)initWithHealthStore:(id)a0 shouldFetchCycleFactors:(BOOL)a1 calendarCache:(id)a2 queue:(id)a3;

@end
