@class NSObject, NSString, HDProfile, HDSQLitePredicate, _HKFilter, HDActivitySummaryBuilder, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDActivitySummaryQueryHelper : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver> {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    _HKFilter *_filter;
    HDActivitySummaryBuilder *_activitySummaryBuilder;
    BOOL _initialResultsSent;
    BOOL _needsUpdateAfterUnlock;
    BOOL _shouldBatchSummaries;
    NSMutableDictionary *_previousActivityCachesByCacheIndex;
    long long _lastProcessedAnchor;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    long long _enumeratedSummaryCount;
}

@property (readonly, copy, nonatomic) id /* block */ batchedInitialResultsHandler;
@property (readonly, copy, nonatomic) id /* block */ batchedUpdateHandler;
@property BOOL shouldIncludePrivateProperties;
@property BOOL shouldIncludeStatistics;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;
@property (readonly) long long enumeratedSummaryCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)samplesAdded:(id)a0 anchor:(id)a1;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)pause;
- (void)dealloc;
- (void)start;
- (void)stop;
- (id)initWithProfile:(id)a0 filter:(id)a1 batchedInitialResultsHandler:(id /* block */)a2 batchedUpdateHandler:(id /* block */)a3;
- (void).cxx_destruct;

@end
