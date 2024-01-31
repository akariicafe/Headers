@class NSXPCListener, SBSRemoteAlertHandle, NSString;

@interface AAFlowPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, AAFlowPresenterProtocol, AAFlowPresenterHostProtocol>

@property (retain, nonatomic) NSXPCListener *remoteListener;
@property (retain, nonatomic) SBSRemoteAlertHandle *remoteAlertHandle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ presentationCompletion;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (void)dealloc;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;
- (void)_callCompletionBlockWithError:(id)a0;
- (void)flowFinishedWithError:(id)a0 completion:(id /* block */)a1;
- (void)launchProcessWithUserInfo:(id)a0;

@end
