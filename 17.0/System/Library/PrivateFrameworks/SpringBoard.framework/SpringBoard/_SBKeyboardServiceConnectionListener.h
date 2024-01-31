@class NSString, NSMapTable, FBServiceClientAuthenticator, NSObject, BSServiceConnectionListener;
@protocol OS_dispatch_queue, _SBKeyboardServiceConnectionListenerDelegate;

@interface _SBKeyboardServiceConnectionListener : NSObject <SBSKeyboardFocusServiceClientToServerInterface, BSServiceConnectionListenerDelegate> {
    NSMapTable *_connectionContextToClientMap;
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    BSServiceConnectionListener *_connectionListener;
}

@property (weak, nonatomic) id<_SBKeyboardServiceConnectionListenerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)invalidate;
- (void)activate;
- (void).cxx_destruct;
- (oneway void)setExternalSceneIdentities:(id)a0;
- (id)initWithServiceQueue:(id)a0;
- (oneway void)deferAdditionalEnvironments:(id)a0 whenSceneHasKeyboardFocus:(id)a1 pid:(id)a2;
- (oneway void)removeKeyboardFocusFromSceneIdentity:(id)a0 pid:(id)a1;
- (oneway void)requestKeyboardFocusForSceneIdentity:(id)a0 pid:(id)a1 completion:(id /* block */)a2;
- (oneway void)stopApplyingAdditionalDeferringRulesWhenSceneHasKeyboardFocus:(id)a0 pid:(id)a1;
- (id)_clientForConnectionContext:(id)a0;
- (void)_handleDisconnectForServiceConnection:(id)a0;
- (void)_removeClientForConnectionContext:(id)a0;

@end
