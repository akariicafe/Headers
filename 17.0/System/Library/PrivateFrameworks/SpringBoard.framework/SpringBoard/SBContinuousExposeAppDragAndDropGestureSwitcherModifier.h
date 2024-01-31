@class SBDisplayItem, SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier, SBAppLayout, NSString;

@interface SBContinuousExposeAppDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    SBAppLayout *_initialAppLayout;
    SBAppLayout *_appLayout;
    SBDisplayItem *_displayItemThatWouldBeEvictedIfAny;
    SBAppLayout *_dropTransitionFromAppLayout;
    SBContinuousExposeDragAndDropToAppTransitionSwitcherModifier *_transitionModifier;
    long long _dropAction;
    NSString *_draggedSceneIdentifier;
    BOOL _hasPlatterized;
    BOOL _hasPreviewLifted;
    long long _draggedSceneOriginalLayoutRole;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _platterFrame;
    struct CGPoint { double x; double y; } _location;
    BOOL _gestureEnded;
}

- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (BOOL)switcherHitTestsAsOpaque;
- (BOOL)isContentStatusBarVisibleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)topMostLayoutRolesForAppLayout:(id)a0;
- (double)backgroundOpacityForIndex:(unsigned long long)a0;
- (double)homeScreenDimmingAlpha;
- (BOOL)isResizeGrabberVisibleForAppLayout:(id)a0;
- (id)handleTransitionEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isLayoutRoleMatchMovedToScene:(long long)a0 inAppLayout:(id)a1;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 appLayout:(id)a1 displayItemThatWouldBeEvicted:(id)a2;

@end
