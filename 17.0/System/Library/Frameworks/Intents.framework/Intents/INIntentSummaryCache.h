@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface INIntentSummaryCache : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue;
@property (readonly, nonatomic) NSMutableDictionary *allBundlesCache;
@property (readonly, nonatomic) int systemLanguageChangeNotificationToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCache;

- (void)applicationsDidInstall:(id)a0;
- (void)invalidateCache;
- (void)invalidateCacheForBundleId:(id)a0;
- (id)cachedSummaryForIntent:(id)a0 languageCode:(id)a1 creatingIfNeeded:(BOOL)a2;
- (id)init;
- (void)dealloc;
- (void)setTitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (void)stopObservingApplicationWorkspaceChanges;
- (void)setBundleCache:(id)a0 forBundleId:(id)a1;
- (void)stopAutomaticInvalidation;
- (void)startObservingApplicationWorkspaceChanges;
- (void)startObservingSystemLanguageChanges;
- (void).cxx_destruct;
- (void)setSubtitle:(id)a0 forIntent:(id)a1 languageCode:(id)a2;
- (BOOL)getTitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (BOOL)getSubtitle:(id *)a0 forIntent:(id)a1 languageCode:(id)a2;
- (id)bundleCacheForBundleId:(id)a0;
- (void)startAutomaticInvalidation;
- (void)stopObservingSystemLanguageChanges;

@end
