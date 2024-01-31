@class _UIPortalView, CADisplayLink, NSString, UIView;
@protocol _UITextSelectionWidgetAnimating, UICoordinateSpace;

@interface _UITextMagnifiedLoupeView : UIView <_UITextLoupeView>

@property (nonatomic) struct { BOOL apertureOpen; BOOL floatingAbove; } animationState;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) UIView *portalContainerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *glowView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) _UIPortalView *portalView;
@property (weak, nonatomic) UIView<_UITextSelectionWidgetAnimating> *animatableSelectionWidget;
@property (nonatomic) unsigned long long orientation;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } preferredSize;
@property (readonly, nonatomic) id<UICoordinateSpace> containerCoordinateSpace;
@property (nonatomic) BOOL visible;
@property (nonatomic) double dismissalProgress;
@property (nonatomic) struct CGPoint { double x; double y; } modelPosition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_displayLinkFired:(id)a0;
- (void)removeFromSuperview;
- (id)initWithSourceView:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (id)_animatableSelectionWidget;
- (struct { id x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; })_defaultOriginShadow;
- (struct { struct CGPoint { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; double x2; id x3; })_defaultOriginShape;
- (BOOL)_isVertical;
- (void)_resetAnimationState;
- (void)_stopDisplayLink;
- (void)_updatePortalViewTransformForPosition:(struct CGPoint { double x0; double x1; })a0 zoomScale:(double)a1;
- (struct CGPoint { double x0; double x1; })constrainedModelPositionForPosition:(struct CGPoint { double x0; double x1; })a0;

@end
