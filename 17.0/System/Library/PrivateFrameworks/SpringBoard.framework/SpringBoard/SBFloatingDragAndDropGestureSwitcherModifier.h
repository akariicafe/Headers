@interface SBFloatingDragAndDropGestureSwitcherModifier : SBGestureSwitcherModifier {
    BOOL _floatingSwitcherVisible;
    long long _floatingConfiguration;
    long long _interfaceOrientation;
    long long _currentDropAction;
    struct CGPoint { double x; double y; } _location;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _platterFrame;
    double _platterScale;
}

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerViewBounds;
- (double)dimmingAlphaForLayoutRole:(long long)a0 inAppLayout:(id)a1;
- (double)scaleForIndex:(unsigned long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIndex:(unsigned long long)a0;
- (id)handleTransitionEvent:(id)a0;
- (id)animationAttributesForLayoutElement:(id)a0;
- (BOOL)_isPlatterPreviewIntersectingFloatingApplication;
- (id)handleGestureEvent:(id)a0;
- (id)initWithGestureID:(id)a0 floatingSwitcherVisible:(BOOL)a1 floatingConfiguration:(long long)a2 interfaceOrientation:(long long)a3;

@end
