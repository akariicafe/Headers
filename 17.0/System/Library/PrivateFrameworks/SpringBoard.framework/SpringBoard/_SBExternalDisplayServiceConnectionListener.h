@class NSString, NSMapTable, FBServiceClientAuthenticator, NSObject, BSServiceConnectionListener;
@protocol _SBExternalDisplayServiceConnectionListenerDelegate, OS_dispatch_queue;

@interface _SBExternalDisplayServiceConnectionListener : NSObject <SBSExternalDisplayServiceClientToServerInterface, BSServiceConnectionListenerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMapTable *_lock_connectionToClientMap;
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BSServiceConnectionListener *_connectionListener;
}

@property (weak, nonatomic) id<_SBExternalDisplayServiceConnectionListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)activate;
- (id)_clientForConnection:(id)a0;
- (void).cxx_destruct;
- (id)initWithServiceQueue:(id)a0;
- (oneway void)getConnectedDisplayInfoWithCompletion:(id /* block */)a0;
- (oneway void)setDisplayArrangement:(id)a0 forDisplay:(id)a1;
- (oneway void)setDisplayMirroringEnabled:(id)a0 forDisplay:(id)a1;
- (oneway void)setDisplayModeSettings:(id)a0 forDisplay:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
- (id)_createClientForConnection:(id)a0;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)_removeClientForConnection:(id)a0;
- (void)notifyObserversExternalDisplayDidConnect:(id)a0;
- (void)notifyObserversExternalDisplayDidUpdateProperties:(id)a0 requestingClient:(id)a1;
- (void)notifyObserversExternalDisplayWillDisconnect:(id)a0;

@end
