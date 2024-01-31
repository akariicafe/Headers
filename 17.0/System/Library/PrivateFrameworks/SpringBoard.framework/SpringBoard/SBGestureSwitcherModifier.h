@class NSUUID, SBGestureSwitcherModifierEvent;

@interface SBGestureSwitcherModifier : SBSwitcherModifier {
    NSUUID *_gestureID;
    SBGestureSwitcherModifierEvent *_lastGestureEvent;
}

@property (readonly, nonatomic) unsigned long long gesturePhase;

- (BOOL)requireStripContentsInViewHierarchy;
- (BOOL)isItemResizingAllowedForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)visibleMarginForItemContainerAtIndex:(unsigned long long)a0;
- (unsigned long long)maskedCornersForIndex:(unsigned long long)a0;
- (BOOL)clipsToUnobscuredMarginAtIndex:(unsigned long long)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)handleEvent:(id)a0;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0;
- (BOOL)isPreparingLayout;
- (BOOL)isUpdatingLayout;

@end
