@class UIColor, NCNotificationViewController, NSString, UIView, PLSwipeInteraction, UIViewController;
@protocol NCNotificationListCellActionHandling, NCNotificationListCellActionProviding, NCNotificationListDimmable;

@interface NCNotificationListCell : UIView <PLSwipeInteractionDelegate, NCMaterialDisplaying, NCNotificationListDimmable> {
    PLSwipeInteraction *_swipeInteraction;
}

@property (readonly, nonatomic) NCNotificationViewController *notificationViewController;
@property (retain, nonatomic) UIViewController<NCNotificationListDimmable> *contentViewController;
@property (weak, nonatomic) id<NCNotificationListCellActionHandling> actionHandler;
@property (weak, nonatomic) id<NCNotificationListCellActionProviding> actionProvider;
@property (retain, nonatomic) UIColor *textColor;
@property (readonly, nonatomic) UIView *contentView;
@property (nonatomic, getter=isContentUserInteractionEnabled) BOOL contentUserInteractionEnabled;
@property (nonatomic, getter=isSideSwipedWithoutTouch) BOOL sideSwipedWithoutTouch;
@property (readonly, nonatomic) PLSwipeInteraction *swipeInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long materialRecipe;
@property (copy, nonatomic) UIColor *materialTintColor;
@property (copy, nonatomic) NSString *materialGroupNameBase;

- (void)_layoutContentView;
- (void)_resetClipping;
- (void)_setupClipping;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldContinuePresentingActionButtonsForSwipeInteraction:(id)a0;
- (double)buttonsCornerRadiusForSwipeInteraction:(id)a0;
- (void)hintSideSwipeForDefaultAction;
- (void)revealSupplementaryActionsWithCompletion:(id /* block */)a0;
- (id)swipeInteraction:(id)a0 actionsToRevealFromLayoutLocation:(unsigned long long)a1;
- (void)swipeInteraction:(id)a0 didMoveToNewXPosition:(double)a1;
- (void).cxx_destruct;
- (void)swipeInteractionDidSignificantUserInteraction:(id)a0;
- (BOOL)swipeInteraction:(id)a0 shouldRevealActionsFromLayoutLocation:(unsigned long long)a1;
- (BOOL)shouldVerticallyStackButtonsForSwipeInteraction:(id)a0;
- (BOOL)_shouldPerformClipping;
- (id)buttonsTintColorForSwipeInteraction:(id)a0;
- (id)viewToMoveForSwipeInteraction:(id)a0;
- (void)hideActionButtonsAnimated:(BOOL)a0 fastAnimation:(BOOL)a1 completion:(id /* block */)a2;
- (BOOL)_actionHandlerAllowsPerformingClipping;
- (void)layoutSubviews;
- (long long)buttonsRecipeForSwipeInteraction:(id)a0;
- (BOOL)_disableRasterizeInAnimations;
- (void)_configureClippingIfNecessary;
- (id)senderForActionWithIdentifier:(id)a0;
- (id)buttonsTextColorForSwipeInteraction:(id)a0;
- (void)swipeInteractionDidBeginRevealingActions:(id)a0;
- (void)swipeInteractionDidBeginHidingActions:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
