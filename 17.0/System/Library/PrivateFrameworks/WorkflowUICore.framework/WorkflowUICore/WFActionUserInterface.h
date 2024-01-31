@class UIWindow, NSString, WFWorkflowRunningContext, WFDialogAttribution, UIViewController;
@protocol WFActionUserInterfaceDelegate;

@interface WFActionUserInterface : NSObject <WFActionRemoteUserInterface>

@property (weak, nonatomic) id<WFActionUserInterfaceDelegate> delegate;
@property (readonly, nonatomic) WFDialogAttribution *attribution;
@property (retain, nonatomic) UIViewController *viewControllerForPresenting;
@property (retain, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) UIWindow *presentationAnchor;
@property (readonly, nonatomic) NSString *userInterfaceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancelPresentationWithCompletionHandler:(id /* block */)a0;
- (id)initWithUserInterfaceType:(id)a0 attribution:(id)a1;

@end
