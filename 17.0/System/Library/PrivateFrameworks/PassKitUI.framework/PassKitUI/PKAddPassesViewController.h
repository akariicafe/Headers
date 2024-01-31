@class NSData, NSString, NSArray, PKPassesXPCContainer, PKCancelingAnimatedTransitioningHandler, PKRemoteAddPassesViewController, _UIAsyncInvocation, PKAssertion;
@protocol PKAddPassesViewControllerDelegate;

@interface PKAddPassesViewController : UIViewController <UIViewControllerTransitioningDelegate> {
    BOOL _viewHasAppeared;
    BOOL _succeeded;
    _UIAsyncInvocation *_viewServiceCancelRequest;
    PKRemoteAddPassesViewController *_remoteViewController;
    PKAssertion *_contactlessInterfaceAssertion;
    PKCancelingAnimatedTransitioningHandler *_animatedTransitionHandler;
    id<PKAddPassesViewControllerDelegate> _delegate;
    unsigned long long _presentationSource;
    NSArray *_passes;
    NSData *_issuerData;
    NSData *_signature;
    PKPassesXPCContainer *_passesContainer;
}

@property (weak, nonatomic) id<PKAddPassesViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)canAddPasses;

- (void)applicationDidBecomeActive:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)applicationWillResignActive:(id)a0;
- (BOOL)succeeded;
- (void)dealloc;
- (id)interactionControllerForPresentation:(id)a0;
- (void)viewWillLayoutSubviews;
- (long long)preferredStatusBarStyle;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (long long)modalPresentationStyle;
- (id)childViewControllerForStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (id)childViewControllerForStatusBarHidden;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (long long)modalTransitionStyle;
- (id)initWithPass:(id)a0;
- (void)_requestRemoteViewController;
- (id)initWithPasses:(id)a0;
- (void)_applyRemoteViewController:(id)a0;
- (void)_aquireAssertions;
- (void)_handleCanceledPresentationWithPresentingViewController:(id)a0;
- (void)_ingestionDidFinishWithResult:(unsigned long long)a0;
- (id)_initWithPasses:(id)a0 orPassesContainer:(id)a1 orIssuerData:(id)a2 withSignature:(id)a3 fromPresentationSource:(unsigned long long)a4 error:(id *)a5;
- (id)initWithIssuerData:(id)a0 signature:(id)a1 error:(id *)a2;
- (id)initWithPasses:(id)a0 fromPresentationSource:(unsigned long long)a1;
- (id)initWithPassesContainer:(id)a0 fromPresentationSource:(unsigned long long)a1;

@end
