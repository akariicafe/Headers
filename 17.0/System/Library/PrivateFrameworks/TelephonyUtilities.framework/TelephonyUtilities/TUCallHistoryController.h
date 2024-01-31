@class NSString, NSArray, TUDispatcher, CHManager, TUFeatureFlags, NSMutableSet, TUCallProviderManager;
@protocol TUCallHistoryControllerDataSource;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate>

@property (class, readonly, nonatomic) TUCallHistoryController *sharedController;

@property (readonly, nonatomic) TUFeatureFlags *featureFlags;
@property (retain, nonatomic) CHManager *callHistoryManager;
@property (retain, nonatomic) TUCallProviderManager *callProviderManager;
@property (retain, nonatomic) TUDispatcher *dispatcher;
@property (retain, nonatomic) TUDispatcher *simpleIvarDispatcher;
@property (retain, nonatomic) NSArray *recentCalls;
@property (nonatomic) unsigned long long unreadCallCount;
@property (copy, nonatomic) NSArray *thirdPartyCallProviders;
@property (retain, nonatomic) NSMutableSet *metadataPreCachedOptions;
@property (readonly, nonatomic) id<TUCallHistoryControllerDataSource> dataSource;
@property (nonatomic) unsigned long long coalescingStrategy;
@property (nonatomic) unsigned long long options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)callHistoryControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;
+ (id)sharedControllerWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1;

- (void)deleteAllRecentCalls;
- (void)providersChangedForProviderManager:(id)a0;
- (id)init;
- (void)dealloc;
- (void)markRecentVideoCallsAsRead;
- (void)deleteRecentCall:(id)a0;
- (void)markRecentCallsAsRead;
- (void)loadOlderRecentCalls;
- (void)markRecentCallsAsReadWithPredicate:(id)a0;
- (void)dispatcherDidFinishBoost:(id)a0;
- (id)initWithCoalescingStrategy:(unsigned long long)a0 options:(unsigned long long)a1 dataSource:(id)a2;
- (void)markRecentAudioCallsAsRead;
- (BOOL)canLoadOlderRecentCalls;
- (void)_updateCallHistoryManagerUsingCurrentOptions;
- (void)loadDispatchQueue;
- (void).cxx_destruct;
- (void)boostQualityOfService;
- (id /* block */)callHistoryManagerInitializationDispatchBlock;
- (void)reloadWithOptions:(unsigned long long)a0;
- (void)deleteRecentCalls:(id)a0;
- (id)recentCallsWithPredicate:(id)a0;
- (void)callHistoryDatabaseChanged:(id)a0;
- (id /* block */)callHistoryManagerLoadOlderRecentCallsDispatchBlock;
- (id /* block */)callHistoryManagerRecentCallsDispatchBlock;
- (id)_callHistoryCoalescingStrategyForCoalescingStrategy:(unsigned long long)a0;
- (long long)callHistoryControllerCallHistoryFetchLimit;

@end
