@class br_pacer, NSMutableDictionary, NSString, NSMutableSet, NSObject;
@protocol BRContainerHelper, OS_dispatch_source, OS_dispatch_queue, NSObject;

@interface BRContainerCache : NSObject {
    id<BRContainerHelper> _helper;
    NSMutableDictionary *_containersByID;
    NSMutableSet *_fetchedContainerIDs;
    BOOL _containerCacheUptodate;
    NSObject<OS_dispatch_queue> *_queue;
    br_pacer *_invalidationPacer;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    id<NSObject> _containerStatusObserver;
    NSString *_personaID;
}

+ (id)containerHelper;
+ (BOOL)hasDaemonicParts;
+ (BOOL)isPersonalProvider;
+ (id)containerCache;
+ (id)containerCacheForPersonaID:(id)a0;
+ (BOOL)isManagedProvider;

- (void)dealloc;
- (id)allContainersBlockIfNeeded:(BOOL)a0;
- (id)documentContainers;
- (void).cxx_destruct;
- (void)_accountWillChange;
- (id)_allContainersByIDNoCopyBlocking:(BOOL)a0;
- (void)_containerListDidChange;
- (BOOL)_updateContainersCache;
- (id)allContainersByID;
- (id)containerByID:(id)a0;
- (id)initWithHelper:(id)a0 personaID:(id)a1;
- (void)invalidateAndClearCache:(BOOL)a0;
- (void)subscribeToContainerStatusUpdate;
- (void)unsubscribeToContainerStatusUpdate;

@end
