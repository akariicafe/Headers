@class UIWindow, NSString, UIAlertController, UIView, DDAction, UIViewController;
@protocol DDDetectionControllerInteractionDelegate;

@interface DDActionController : NSObject <DDActionDelegate, UIPopoverPresentationControllerDelegate> {
    UIViewController *_presentedViewController;
    UIViewController *_currentBaseViewController;
    UIWindow *_originalWindow;
    NSString *_idsListenerID;
}

@property (retain) DDAction *currentAction;
@property (retain, nonatomic) id<DDDetectionControllerInteractionDelegate> interactionDelegate;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIAlertController *alertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)presentingBaseView:(id)a0 isLargeEnoughForAction:(id)a1;

- (void)_cleanup;
- (id)init;
- (void)cancelAction;
- (void)dealloc;
- (void)performAction:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)prepareForPopoverPresentation:(id)a0;
- (void)actionDidFinish:(id)a0;
- (void).cxx_destruct;
- (id)presentationController:(id)a0 viewControllerForAdaptivePresentationStyle:(long long)a1;
- (void)actionDidFinish:(id)a0 shouldDismiss:(BOOL)a1;
- (BOOL)isPerformingAction;
- (void)_didDismissActionViewController;
- (void)_dismissCurrentViewControllerOurselves;
- (void)_presentController:(id)a0;
- (void)_presentCurrentViewControllerOurselves;
- (void)_willPresentViewController;
- (void)action:(id)a0 presentationShouldBeModal:(BOOL)a1;
- (void)action:(id)a0 viewControllerReady:(id)a1;
- (BOOL)actionIsCancellable;
- (id)actionsForURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (id)actionsForURL:(id)a0 result:(struct __DDResult { } *)a1 enclosingResult:(struct __DDResult { } *)a2 context:(id)a3;
- (void)cleanupNoDismiss;
- (id)defaultActionForURL:(id)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (void)dismissCurrentController;
- (BOOL)facetimeAvailable;
- (void)failedToPrepareViewControllerForAction:(id)a0;
- (BOOL)isPresentingInPopover;
- (void)tellDelegateActionDidFinish;
- (void)tellDelegateActionDidFinishShouldDismiss:(BOOL)a0;
- (void)viewControllerRequiresModalInPopover:(BOOL)a0;

@end
