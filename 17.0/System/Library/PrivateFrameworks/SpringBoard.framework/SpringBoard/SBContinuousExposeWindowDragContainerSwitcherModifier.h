@class SBDisplayItem, NSString, SBAppLayout, SBContinuousExposeWindowDragContentSwitcherModifier, SBContinuousExposeWindowDragSwitcherModifier;

@interface SBContinuousExposeWindowDragContainerSwitcherModifier : SBFilteringSwitcherModifier {
    long long _blinkCount;
    SBAppLayout *_appLayoutContainingAppLayout;
    SBAppLayout *_springLoadTargetAppLayout;
    long long _windowDragSpringLoadState;
    NSString *_continuousExposeSpringLoadReasonWithAppLayout;
}

@property (readonly, nonatomic) SBAppLayout *initialAppLayout;
@property (readonly, nonatomic) SBDisplayItem *selectedDisplayItem;
@property (readonly, nonatomic) SBContinuousExposeWindowDragContentSwitcherModifier *windowDragContentSwitcherModifier;
@property (readonly, nonatomic) SBContinuousExposeWindowDragSwitcherModifier *windowDragModifier;

- (double)continuousExposeStripProgress;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (id)appLayoutOnStage;
- (double)dockProgress;
- (void)didMoveToParentModifier:(id)a0;
- (id)_appLayoutContainingDisplayItem:(id)a0;
- (id)adjustedContinuousExposeIdentifiersInStripFromPreviousIdentifiersInStrip:(id)a0;
- (id)handleTapOutsideToDismissEvent:(id)a0;
- (BOOL)isLayoutRoleBlurred:(long long)a0 inAppLayout:(id)a1;
- (id)handleTapAppLayoutEvent:(id)a0;
- (BOOL)wantsDockBehaviorAssertion;
- (id)topMostLayoutElements;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)wantsSceneResizesHostedContextForAppLayout:(id)a0;
- (id)handleTimerEvent:(id)a0;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)appLayoutsForContinuousExposeIdentifier:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (double)blurDelayForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingBoxForCurrentStage;
- (id)_createInterceptableTransitionRequestForActivatingAppLayout:(id)a0 withSelectedDisplayItem:(id)a1;
- (double)_dockProgressForDraggedWindow;
- (id)handleGestureEvent:(id)a0;
- (id)initWithAppLayouts:(id)a0 initialAppLayout:(id)a1 selectedDisplayItem:(id)a2 windowDragContentSwitcherModifier:(id)a3;
- (id)routingModifier:(id)a0 topMostLayoutElementsByModifier:(id)a1;

@end
