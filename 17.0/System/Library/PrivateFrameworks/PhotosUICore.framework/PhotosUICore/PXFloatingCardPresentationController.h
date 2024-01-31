@class PXFloatingCardViewController, NSString, PXFloatingCardGestureCoordinator, UIViewController;
@protocol PXFloatingCardLayout, PXFloatingCardContainer, PXFloatingCardPresentationControllerDelegate;

@interface PXFloatingCardPresentationController : NSObject <PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardViewControllerDelegate>

@property (weak, nonatomic) UIViewController<PXFloatingCardContainer> *containerViewController;
@property (weak, nonatomic) PXFloatingCardViewController *cardViewController;
@property (retain, nonatomic) PXFloatingCardGestureCoordinator *gestureCoordinator;
@property (nonatomic) BOOL isPresenting;
@property (retain, nonatomic) id<PXFloatingCardLayout> layout;
@property (weak, nonatomic) id<PXFloatingCardPresentationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)floatingCardViewControllerDismissTapped:(id)a0;
- (void)gestureCoordinatorDidBeginInteraction:(id)a0;
- (void)dismissAnimated:(BOOL)a0;
- (void)dimAnimated:(BOOL)a0;
- (double)availableHeightForCardViewController:(id)a0;
- (void)presentViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithContainerViewController:(id)a0;
- (void)setLayout:(id)a0 animated:(BOOL)a1;
- (void)_removeChildViewControllerFromParent:(id)a0;
- (void).cxx_destruct;
- (void)_addChildViewController:(id)a0 toParentViewController:(id)a1;
- (void)cardViewController:(id)a0 didUpdatePosition:(unsigned long long)a1;
- (void)_applyLayout;
- (void)cardViewController:(id)a0 didUpdateHeight:(double)a1;

@end
