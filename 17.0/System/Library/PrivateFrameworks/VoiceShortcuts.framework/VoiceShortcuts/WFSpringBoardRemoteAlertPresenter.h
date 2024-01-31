@class NSXPCListener, NSString, SBSRemoteAlertHandle, NSXPCConnection, NSObject;
@protocol OS_dispatch_source, WFDialogAlertPresenterDelegate;

@interface WFSpringBoardRemoteAlertPresenter : NSObject <SBSRemoteAlertHandleObserver, NSXPCListenerDelegate, WFDialogAlertPresenter>

@property (retain, nonatomic) SBSRemoteAlertHandle *activeHandle;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *deactivateTimer;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WFDialogAlertPresenterDelegate> delegate;
@property (readonly, nonatomic) BOOL alertIsActive;

- (void)remoteAlertHandleDidDeactivate:(id)a0;
- (void)remoteAlertHandleDidActivate:(id)a0;
- (id)init;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)a0;
- (void)deactivateAlert;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activateAlertWithPresentationTarget:(id)a0;
- (void).cxx_destruct;
- (void)remoteAlertHandle:(id)a0 didInvalidateWithError:(id)a1;

@end
