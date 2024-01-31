@class NSString, NSDictionary, HKHealthStore, NSHashTable, _HKDateRangeQuery;

@interface HKSampleTypeDateRangeController : NSObject {
    HKHealthStore *_healthStore;
    _HKDateRangeQuery *_dateRangeQuery;
    NSHashTable *_observers;
    BOOL _applicationIsInForeground;
    BOOL _lastQuerySufferedError;
}

@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *dateRangesBySampleType;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithHealthStore:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)_beginUpdates;
- (void)_applicationMovingToForeground:(id)a0;
- (void)_applicationMovingToBackground:(id)a0;
- (void)_alertObserverDidUpdateDateRanges:(id)a0;
- (void)_alertObserversDidUpdateDateRanges;
- (void)_resultsDidUpdate:(id)a0;
- (void)_updateHandlerDidReceiveError:(id)a0;
- (id)dateRangeForSampleType:(id)a0;

@end
