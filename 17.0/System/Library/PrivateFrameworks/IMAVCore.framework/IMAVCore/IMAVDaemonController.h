@class IMRemoteObject, NSString, NSObject, IMAVDaemonListener, IMLocalObject, NSMutableArray, NSLock;
@protocol OS_dispatch_queue, IMAVDaemonProtocol;

@interface IMAVDaemonController : NSObject {
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource { } *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

@property (readonly, nonatomic) IMAVDaemonListener *listener;

+ (id)sharedInstance;

- (BOOL)hasListenerForID:(id)a0;
- (BOOL)removeListenerID:(id)a0;
- (void)forwardInvocation:(id)a0;
- (id)init;
- (void)dealloc;
- (BOOL)isConnected;
- (void)_localObjectCleanup;
- (void)localObjectDiedNotification:(id)a0;
- (void)_remoteObjectCleanup;
- (BOOL)localObjectExists;
- (void)_listenerSetUpdated;
- (void)_noteSetupComplete;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)addListenerID:(id)a0;
- (void).cxx_destruct;
- (BOOL)remoteObjectExists;
- (void)_connectToDaemon;
- (void)_disconnectFromDaemon;
- (void)remoteObjectDiedNotification:(id)a0;
- (BOOL)isConnecting;
- (void)_cleanUpConnection;
- (BOOL)__isLocalObjectValidOnQueue:(id)a0;
- (BOOL)__isRemoteObjectValidOnQueue:(id)a0;
- (void)_localObjectDiedNotification:(id)a0;
- (BOOL)_makeConnectionWithCompletionBlock:(id /* block */)a0;
- (void)_remoteObjectDiedNotification:(id)a0;

@end
