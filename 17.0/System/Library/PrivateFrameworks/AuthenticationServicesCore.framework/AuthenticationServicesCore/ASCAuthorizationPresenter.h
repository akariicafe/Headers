@class NSXPCListener, NSString, SBSRemoteAlertHandle, NSXPCConnection, NSArray, NSObject;
@protocol OS_dispatch_queue, ASCAuthorizationPresenterDelegate, ASCViewServiceProtocol;

@interface ASCAuthorizationPresenter : NSObject <NSXPCListenerDelegate, SBSRemoteAlertHandleObserver, ASCAuthorizationPresenterHostProtocol> {
    NSXPCListener *_remoteListener;
    id /* block */ _credentialResultHandler;
    SBSRemoteAlertHandle *_remoteAlertHandle;
    NSObject<OS_dispatch_queue> *_invalidationQueue;
    NSXPCConnection *_viewServiceConnection;
    id<ASCViewServiceProtocol> _viewServiceProxy;
    NSObject<OS_dispatch_queue> *_interfaceUpdateQueue;
    NSArray *_loginChoicesForQueuedUpdate;
    BOOL _hasQueuedPINEntryInterfaceRequest;
    BOOL _hasQueuedCABLEClientWillConnectRequest;
    BOOL _hasQueuedCABLEClientWillAuthenticateRequest;
}

@property (weak, nonatomic) id<ASCAuthorizationPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)dismiss;
- (id)init;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_invalidateWithError:(id)a0;
- (void)initializeClientToViewServiceConnection;
- (void)dismissWithError:(id)a0;
- (void)presentError:(id)a0 forService:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentPINEntryInterface;
- (void)updateInterfaceForUserVisibleError:(id)a0;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (BOOL)_isErrorDueToNewAlertHandleRequest:(id)a0;
- (BOOL)_isPresentationContextValid:(id)a0 error:(id *)a1;
- (void)_performQueuedUpdatesIfNecessary;
- (void)authorizationRequestFinishedWithCredential:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)authorizationRequestInitiatedWithLoginChoice:(id)a0 authenticatedContext:(id)a1 completionHandler:(id /* block */)a2;
- (void)presentAuthorizationWithContext:(id)a0 forProcess:(id)a1 completionHandler:(id /* block */)a2;
- (void)startCABLEAuthenticationWithCompletionHandler:(id /* block */)a0;
- (void)validateUserEnteredPIN:(id)a0 completionHandler:(id /* block */)a1;

@end
