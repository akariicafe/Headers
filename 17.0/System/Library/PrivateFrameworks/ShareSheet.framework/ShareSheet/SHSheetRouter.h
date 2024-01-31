@class UINavigationController, UIViewController, NSString;
@protocol SHSheetContentView, SHSheetActivityPerformerPresentationInterface;

@interface SHSheetRouter : NSObject <SHSheetActivityPerformerPresentationInterface, UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>

@property (retain, nonatomic) UINavigationController *mainNavigationController;
@property (weak, nonatomic) UINavigationController *secondaryNavigationController;
@property (weak, nonatomic) UINavigationController *userDefaultsNavigationController;
@property (weak, nonatomic) UIViewController<SHSheetContentView> *mainViewController;
@property (weak, nonatomic) UIViewController<SHSheetContentView> *secondaryViewController;
@property (weak, nonatomic) UIViewController *presentationBlockingViewController;
@property (retain, nonatomic) UIViewController *presentationViewController;
@property (retain, nonatomic) UIViewController *currentViewControllerForActivityBeingListened;
@property (nonatomic) BOOL listenForDismissalTransition;
@property (copy, nonatomic) id /* block */ listenerCompletionHandler;
@property (weak, nonatomic) UIViewController *collaborationParticipantsViewController;
@property (copy, nonatomic) id /* block */ collaborationParticipantsDismissalHandler;
@property (readonly, weak, nonatomic) UIViewController *rootViewController;
@property (retain, nonatomic) id<SHSheetActivityPerformerPresentationInterface> activityPresentationController;
@property (readonly, nonatomic) BOOL isPresentedWithinPopover;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRootViewController:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)_presentViewController:(id)a0;
- (void)presentSecondaryViewController:(id)a0;
- (void)_configureAirdropViewController:(id)a0;
- (void)_configureMainViewController:(id)a0;
- (void)_configurePresentationBlockingViewController:(id)a0;
- (void)_didDismissCollaborationParticipantsViewController;
- (void)_dismissOptionsViewController;
- (void)_installChildViewController:(id)a0 forParentViewController:(id)a1;
- (void)_presentationControllerDismissalTransitionDidEndNotification:(id)a0;
- (void)activityPerformCleanUpPresentation:(id)a0;
- (void)activityPerformer:(id)a0 preparePresentationWithContext:(id)a1 completion:(id /* block */)a2;
- (BOOL)activityPerformer:(id)a0 presentPopoverContentViewController:(id)a1;
- (void)activityPerformer:(id)a0 presentViewController:(id)a1 completion:(id /* block */)a2;
- (void)activityPerformer:(id)a0 startListeningForDismissalTransitionWithCompletion:(id /* block */)a1;
- (BOOL)activityPerformerCanPresent:(id)a0;
- (void)activityPerformerStopListeningForDismissalTransition:(id)a0;
- (void)dismissCollaborationParticipantsViewController;
- (void)dismissForActivityPerformerResult:(id)a0 completionHandler:(id /* block */)a1;
- (void)dismissPresentationBlockingViewControllerIfNeeded;
- (void)dismissSecondaryViewControllerAnimated:(BOOL)a0;
- (void)dismissUserDefaultsViewControllerAnimated:(BOOL)a0;
- (void)installAirdropViewController:(id)a0;
- (void)presentAirdropViewController:(id)a0;
- (void)presentAlertController:(id)a0;
- (void)presentCollaborationParticipantsViewController:(id)a0 dismissalHandler:(id /* block */)a1;
- (void)presentMainViewController:(id)a0 withNavigationControllerSupport:(BOOL)a1;
- (void)presentOptionsViewController:(id)a0;
- (void)presentPresentationBlockingViewController;
- (void)presentUserDefaultsViewController:(id)a0;

@end
