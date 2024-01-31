@class NSArray, NSMutableArray, NSString;
@protocol CSPresentationViewControllerDelegate;

@interface CSPresentationViewController : CSCoverSheetViewControllerBase <BSDescriptionProviding> {
    unsigned long long _mutatingPresentation;
    unsigned long long _transitioning;
}

@property (weak, nonatomic) id<CSPresentationViewControllerDelegate> presentationDelegate;
@property (readonly, nonatomic, getter=hasContent) BOOL hasContent;
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, copy, nonatomic) NSMutableArray *contentViewControllers;
@property (readonly, copy, nonatomic) NSArray *presentedViewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rebuildEverythingForReason:(id)a0;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dismissContentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dismissContentViewControllers:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewWillLayoutSubviews;
- (id)succinctDescriptionBuilder;
- (void)presentContentViewControllers:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)viewDidLoad;
- (long long)participantState;
- (void)presentContentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_didTransitionViewController:(id)a0 toPresented:(BOOL)a1;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dismissContentViewController:(id)a0 animated:(BOOL)a1;
- (void)_updatePresentationForViewController:(id)a0 presentation:(id)a1 animationSettings:(id)a2;
- (void).cxx_destruct;
- (void)dismissPresentationAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)presentContentViewController:(id)a0 animated:(BOOL)a1;
- (id)succinctDescription;
- (void)aggregateBehavior:(id)a0;
- (void)aggregatePresentation:(id)a0;
- (BOOL)handleAppearanceUpdateFromController:(id)a0 animationSettings:(inout id *)a1;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)_updateContentViewControllersAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePresentationAnimated:(BOOL)a0;
- (void)_reflowPresentationWithAnimationSettings:(id)a0;
- (void)dismissPresentationAnimated:(BOOL)a0;
- (BOOL)handleEvent:(id)a0;

@end
