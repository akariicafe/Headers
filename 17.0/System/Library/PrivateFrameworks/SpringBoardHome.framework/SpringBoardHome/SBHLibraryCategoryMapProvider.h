@class NSArray, NSString, SBHLibraryCategoryMap, NSHashTable, NSMutableSet, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, SBHLibraryCategoryMapProviderSource;

@interface SBHLibraryCategoryMapProvider : NSObject <SBHLibraryCategoryMapProviderSourceDelegate> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_serializationQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<SBHLibraryCategoryMapProviderSource> _libraryCategoryMapProviderSource;
    NSString *_cacheFilePath;
    NSMutableSet *_forbiddenApplicationIdentifiers;
    NSMutableArray *_pendingRefreshRequests;
    NSArray *_inflightRefreshRequests;
    BOOL _refreshIsScheduled;
    BOOL _isCategoryMapOverriddenForTesting;
    long long _sessionIdentifier;
    id _localeNotificationHandle;
    id _clearCacheNotificationHandle;
}

@property (class, readonly, nonatomic) NSString *cacheDirectory;

@property (readonly, nonatomic) double workQueueCoalescingInterval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) SBHLibraryCategoryMap *libraryCategoryMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseFilePath;
+ (id)categoryMapCacheFilePathForVersion:(id)a0 source:(id)a1;
+ (id)categoryMapFromURL:(id)a0 error:(id *)a1;
+ (unsigned long long)derivedOptionsFromArrayOfRequests:(id)a0;
+ (void)clearCachesForReason:(id)a0;

- (void)_callbackQueue_notifyObserverCategoryMapWasRefreshedWithOptions:(unsigned long long)a0 refreshedCategoryMap:(id)a1;
- (id)initWithSource:(id)a0;
- (BOOL)_workQueue_updateLibraryCategoryMap:(id)a0 withSessionId:(unsigned long long)a1 shouldPersist:(BOOL)a2 reason:(id)a3;
- (void)removeObserver:(id)a0;
- (void)_setupClearCacheNotification;
- (void)_callbackQueue_notifyObserversWillSunsetFailedRequests:(id)a0;
- (void)_workQueue_scheduleRefreshIfNotScheduled;
- (id)requestLibraryCategoryMapRefreshWithOptions:(unsigned long long)a0 reason:(id)a1;
- (BOOL)unforbidApplicationIdentifier:(id)a0;
- (void)resetForbiddenApplicationIdentifiers;
- (void)_workQueue_cancelAnyScheduledRefresh;
- (void)_callbackQueue_notifyObserversBeginningRefreshSession:(long long)a0 requests:(id)a1;
- (void)clearOverride;
- (void)_setupLocaleNotification;
- (void)_workQueue_queueUpNextRequests:(id)a0 runNow:(BOOL)a1;
- (void)_callbackQueue_notifyObserversWillRefresh:(long long)a0 options:(unsigned long long)a1;
- (id)_copyOfObservers;
- (BOOL)hasCachedLibraryCategoryMapOnFileSystem;
- (void)_callbackQueue_notifyObserversWillReEnqueueFailedRequests:(id)a0;
- (void).cxx_destruct;
- (void)overrideCategoryMapForTestingAtURL:(id)a0 error:(id *)a1;
- (void)_kickoffInitialHydration;
- (void)_callbackQueue_notifyObserversCategoryMapRefreshFailedWithError:(id)a0;
- (void)requestLibraryCategoryMapUpdateWithRefreshOptions:(unsigned long long)a0 source:(id)a1;
- (BOOL)forbidApplicationIdentifier:(id)a0;
- (void)_callbackQueue_notifyObserversCategoryMapDidntNeedRefresh;
- (void)_workQueue_performNextRequest;
- (unsigned long long)_nextSessionIdentifier;
- (void)_callbackQueue_notifyObserversFinishedRefreshSession:(long long)a0 requests:(id)a1;
- (void)addObserver:(id)a0;
- (void)overrideCategoryMapForTesting:(id)a0;

@end
