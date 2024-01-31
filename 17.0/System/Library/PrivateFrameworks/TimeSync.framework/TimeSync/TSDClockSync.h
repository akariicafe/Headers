@class IODConnection, NSPointerArray, IOKService, NSObject;
@protocol OS_dispatch_queue;

@interface TSDClockSync : NSObject {
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    NSPointerArray *_updateClients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _updateClientsLock;
    IOKService *_service;
    IODConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _serviceLock;
    unsigned long long _referenceCount;
    unsigned long long _asyncCallbackRefcon;
}

@property (readonly, nonatomic) unsigned long long clockIdentifier;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (id)service;
- (id)connection;
- (void).cxx_destruct;
- (void)_handleNotification:(int)a0 withArgs:(unsigned long long *)a1 ofCount:(unsigned int)a2;
- (void)_handleRefreshConnection;
- (void)addReference;
- (void)addUpdateClient:(id)a0;
- (BOOL)deregisterAsyncCallback;
- (void)finalizeNotifications;
- (id)initWithClockIdentifier:(unsigned long long)a0 pid:(int)a1;
- (BOOL)registerAsyncCallback;
- (unsigned long long)releaseReference;
- (void)removeUpdateClient:(id)a0;

@end
