@class NSXPCListener, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, WFDialogAlertPresenterDelegate, WFWorkflowStatusPresenterDelegate;

@interface WFWorkflowStatusPresenter : NSObject <NSXPCListenerDelegate, WFDialogAlertPresenter>

@property (nonatomic, getter=isLaunching) BOOL launching;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSXPCListener *listener;
@property (retain, nonatomic) NSXPCConnection *activeConnection;
@property (weak, nonatomic) id<WFDialogAlertPresenterDelegate> delegate;
@property (weak, nonatomic) id<WFWorkflowStatusPresenterDelegate> statusPresenterDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL alertIsActive;

- (id)init;
- (void)activateAlertInMainSceneOfApplicationWithBundleIdentifier:(id)a0;
- (void)deactivateAlert;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (BOOL)alertIsLaunching;

@end
