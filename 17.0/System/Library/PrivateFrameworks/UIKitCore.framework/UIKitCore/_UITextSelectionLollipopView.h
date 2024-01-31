@class _UIContainerWindowPortalInteraction, NSString, UIBezierPath, UIView;

@interface _UITextSelectionLollipopView : UIView <_UITextSelectionWidgetAnimating, UITextSelectionHandleView>

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) _UIContainerWindowPortalInteraction *dotPortalInteraction;
@property (nonatomic) BOOL portalsDotToContainerWindow;
@property (nonatomic, setter=_setShapeScale:) double _shapeScale;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } dotViewFrame;
@property (retain, nonatomic) UIView *stemView;
@property (retain, nonatomic) UIView *dotView;
@property (readonly, nonatomic) UIView *originView;
@property (readonly, nonatomic) struct { struct CGPoint { double x0; double x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; double x2; id x3; } originShape;
@property (readonly, nonatomic) struct { id x0; double x1; double x2; struct CGSize { double x0; double x1; } x3; } originShadow;
@property (nonatomic) BOOL hiddenForLoupeAnimation;
@property (readonly, nonatomic) BOOL crossfadeOnDismissal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long direction;
@property (readonly, nonatomic, getter=isVertical) BOOL vertical;
@property (retain, nonatomic) UIBezierPath *customShape;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;

- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutStemView;
- (unsigned long long)_configuredStemPoint;
- (struct CGPoint { double x0; double x1; })_dotCenterForDotBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stemPoint:(unsigned long long)a1;
- (struct CGSize { double x0; double x1; })_dotSize;
- (void)_layoutDotView;
- (void)_updateFillColorsForTintColor:(id)a0;
- (void)_usePlainViewForStemView;
- (void)_useShapeViewForStemView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredFrameForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
