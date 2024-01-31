@class BSServiceConnectionListener, NSString, NSArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SBSystemApertureLayoutMonitorServer : NSObject <BSServiceConnectionListenerDelegate, BSInvalidatable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientServiceCollectionLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _framesCollectionLock;
    NSMutableArray *_connections;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    BSServiceConnectionListener *_connectionListener;
    NSArray *_frames;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_systemApertureLayoutDidChange:(id)a0;
- (void)_notifyConnectedListenersOfUpdatedFrames;

@end
