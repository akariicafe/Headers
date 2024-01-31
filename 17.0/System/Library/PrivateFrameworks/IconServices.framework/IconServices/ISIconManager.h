@class ISIconCache, NSHashTable, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ISIconManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) ISIconCache *iconCache;
@property (retain) NSHashTable *iconRegistry;
@property (retain) NSHashTable *observers;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)serviceName;

- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)_init;
- (id)findOrRegisterIcon:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;

@end
