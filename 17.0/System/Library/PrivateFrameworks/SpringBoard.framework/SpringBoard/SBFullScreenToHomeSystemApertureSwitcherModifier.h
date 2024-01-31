@class SBFullScreenToHomeIconZoomSwitcherModifier, NSUUID, SBAppLayout, SBCoplanarSwitcherModifier;

@interface SBFullScreenToHomeSystemApertureSwitcherModifier : SBTransitionSwitcherModifier {
    SBAppLayout *_appLayout;
    SBCoplanarSwitcherModifier *_coplanarModifier;
    SBFullScreenToHomeIconZoomSwitcherModifier *_zoomModifier;
    unsigned long long _direction;
    NSUUID *_suppressionIdentifier;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _expandedCardFrame;
    struct CGPoint { double x; double y; } _expandedCardCenter;
    struct CGPoint { double x; double y; } _liftOffCardVelocity;
    double _initialCardScale;
    BOOL _showShadow;
    BOOL _bounced;
    BOOL _tucked;
    BOOL _jindoIntersectsIntialCardFrame;
    BOOL _shouldClipRegionAboveSystemAperture;
    BOOL _unblurred;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rootContentViewMaskRect;
- (void)didMoveToParentModifier:(id)a0;
- (BOOL)_isIndexZoomAppLayout:(unsigned long long)a0;
- (id)visibleAppLayouts;
- (id)meshTransformForIndex:(unsigned long long)a0;
- (BOOL)_isEffectivelyHome;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct UIRectCornerRadii { double x0; double x1; double x2; double x3; })cornerRadiiForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (struct CGPoint { double x0; double x1; })expandedSourcePositionForSystemApertureTransition;
- (id)systemApertureTransitioningAppLayouts;
- (id)visibleHomeAffordanceLayoutElements;
- (id)appLayoutsToCacheSnapshots;
- (BOOL)systemApertureRequiresHeavyShadowForTransition;
- (double)rotationAngleForIndex:(unsigned long long)a0;
- (BOOL)isSwitcherWindowUserInteractionEnabled;
- (id)topMostLayoutElements;
- (id)repositionProgressNotificationsForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)rootContentViewBlurRadius;
- (void).cxx_destruct;
- (id)transitionDidEnd;
- (double)opacityForLayoutRole:(long long)a0 inAppLayout:(id)a1 atIndex:(unsigned long long)a2;
- (id)transitionWillBegin;
- (id)animationAttributesForLayoutElement:(id)a0;
- (id)_blurItemContainerParameters;
- (id)_collapseMeshForNormalizedXDelta:(double)a0;
- (struct CGPoint { double x0; double x1; })_collapsedTransitionTargetForZoomDown:(BOOL)a0;
- (id)_expandMeshForIndex:(unsigned long long)a0;
- (BOOL)_shouldApplyEffectsToIndex:(unsigned long long)a0;
- (id)_systemApertureSettings;
- (id)_tuckInAtEndMeshForNormalizedXDelta:(double)a0;
- (BOOL)completesWhenChildrenComplete;
- (id)handleRepositionProgressEvent:(id)a0;
- (id)initWithTransitionID:(id)a0 zoomModifier:(id)a1 appLayout:(id)a2 direction:(unsigned long long)a3 expandedCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 cardScale:(double)a5 cardVelocity:(struct CGPoint { double x0; double x1; })a6;

@end
