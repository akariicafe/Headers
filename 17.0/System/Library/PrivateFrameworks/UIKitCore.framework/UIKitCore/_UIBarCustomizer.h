@class UIView, NSString, UIDragInteraction, _UIBarCustomizationItemReservoirView, _UIBarCustomizationSession, NSMutableArray, _UIBarCustomizationContainerView, UIScrollView;
@protocol _UIBarCustomizerDelegate;

@interface _UIBarCustomizer : NSObject <UIDragInteractionDelegate, UIDropInteractionDelegate>

@property (retain, nonatomic) NSMutableArray *_visibleItems;
@property (retain, nonatomic) _UIBarCustomizationSession *_activeSession;
@property (retain, nonatomic) id keyboardSuppressionAssertion;
@property (retain, nonatomic) UIDragInteraction *dragInteraction;
@property (retain, nonatomic) _UIBarCustomizationContainerView *containerView;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) UIScrollView *visibleItemScrollView;
@property (retain, nonatomic) _UIBarCustomizationItemReservoirView *reservoir;
@property (nonatomic) unsigned long long _dropIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialSourceFrame;
@property (nonatomic) struct CGPoint { double x; double y; } lastDragLocation;
@property (nonatomic) BOOL wasReset;
@property (retain, nonatomic) NSMutableArray *ellipsisDotViews;
@property (nonatomic) unsigned long long overflowItemCount;
@property (readonly, weak, nonatomic) id<_UIBarCustomizerDelegate> delegate;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dragInteraction:(id)a0 session:(id)a1 willAddItems:(id)a2 forInteraction:(id)a3;
- (void)dragInteraction:(id)a0 session:(id)a1 willEndWithOperation:(unsigned long long)a2;
- (id)dragInteraction:(id)a0 itemsForAddingToSession:(id)a1 withTouchAtPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragInteraction:(id)a0 itemsForBeginningSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 prefersFullSizePreviewsForSession:(id)a1;
- (BOOL)dragInteraction:(id)a0 sessionIsRestrictedToDraggingApplication:(id)a1;
- (void)end;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 item:(id)a1 willAnimateCancelWithAnimator:(id)a2;
- (void)dragInteraction:(id)a0 sessionWillBegin:(id)a1;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (id)dragInteraction:(id)a0 previewForLiftingItem:(id)a1 session:(id)a2;
- (id)dragInteraction:(id)a0 previewForCancellingItem:(id)a1 withDefault:(id)a2;
- (void)_setActive:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)invalidateLayout;
- (void)_reflow;
- (void)_animateDropOrCancelForItem:(id)a0 animator:(id)a1 isCancel:(BOOL)a2;
- (double)_dragInteraction:(id)a0 delayForLiftBeginningAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_dragItemsAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleDimmingViewTap:(id)a0;
- (int)_overflowItemBucketSize;
- (void)_reflowAnimatedWithAlongsideActions:(id /* block */)a0;
- (void)_updateDebugUI;
- (void)beginWithSession:(id)a0;

@end
