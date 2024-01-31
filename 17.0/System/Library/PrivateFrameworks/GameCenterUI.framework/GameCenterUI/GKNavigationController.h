@class NSString, NSMutableArray;

@interface GKNavigationController : UINavigationController <UIViewControllerRestoration, UINavigationBarDelegate>

@property (retain, nonatomic) NSMutableArray *deferredTransitions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (id)viewControllerWithRestorationIdentifierPath:(id)a0 coder:(id)a1;

- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (BOOL)shouldAutorotate;
- (id)popViewControllerAnimated:(BOOL)a0;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)popToRootViewControllerAnimated:(BOOL)a0;
- (id)popToViewController:(id)a0 animated:(BOOL)a1;
- (void)willShowViewController:(id)a0 animated:(BOOL)a1;
- (void)_deferTransitionOfType:(int)a0 withViewController:(id)a1 animated:(BOOL)a2;
- (void)_gkPushPresentedViewControllerForCompactSizeClass:(id)a0;
- (void)_gkRestorePopoverWithViewControllers:(id)a0 completion:(id /* block */)a1;
- (id)_gkViewControllersForRestoringPopover;
- (void)_performDeferredTransition;
- (BOOL)hasEmbeddedPopoverNavigationStack;
- (id)popEmbeddedPopoverViewControllers;
- (void)setupGKNavigationController;
- (id)targetViewControllerForAction:(SEL)a0;

@end
