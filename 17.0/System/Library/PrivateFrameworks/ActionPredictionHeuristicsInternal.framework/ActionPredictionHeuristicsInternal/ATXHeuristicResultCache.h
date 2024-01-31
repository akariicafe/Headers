@class NSMutableDictionary, BPSSink, NSHashTable, BMBiomeScheduler, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface ATXHeuristicResultCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_expirerInternTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSNumber *_cachedIsFocusActiveState;
    BMBiomeScheduler *_focusScheduler;
    BPSSink *_focusSink;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _appRefreshToken;
    int _significantTimeToken;
    int _learnRefreshToken;
}

@property (readonly, nonatomic) unsigned long long count;

+ (id)sharedInstance;
+ (id)sharedPassLibrary;

- (id)init;
- (void)dealloc;
- (void)expire:(id)a0;
- (void)setObject:(id)a0 expirers:(id)a1 forKey:(id)a2;
- (void)_observeUserFocusChanges;
- (BOOL)isFocusModeActiveWithError:(id *)a0;
- (void)_handleFocusStateUpdate:(id)a0;
- (id)_internExpirerLocked:(id)a0;
- (id)heuristicsCached;
- (void)_expire:(id)a0 postNotification:(BOOL)a1;
- (void).cxx_destruct;
- (void)expireAll;
- (id)firstExpirationDate;
- (id)objectForKey:(id)a0 found:(BOOL *)a1;

@end
