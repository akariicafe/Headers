@class UISelectionGrabberCustomPath, CAShapeLayer, UISelectionGrabberDot, UITextRangeView;

@interface UISelectionGrabber : UIView {
    double m_screenScale;
    UISelectionGrabberDot *m_dotView;
}

@property (readonly, nonatomic) CAShapeLayer *shapeLayer;
@property (readonly, nonatomic) UITextRangeView *hostView;
@property (nonatomic) BOOL isDotted;
@property (nonatomic) BOOL animating;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) UISelectionGrabberCustomPath *customPath;

+ (Class)layerClass;
+ (id)_grabberDot;

- (BOOL)isScrolling;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)isVertical;
- (id)fillColor;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)autoscrolled;
- (BOOL)isRotating;
- (void)setHidden:(BOOL)a0;
- (BOOL)inputViewIsChanging;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)animateGrabberInWithCompletion:(id /* block */)a0;
- (double)_defaultDotWidth;
- (id)_dotView;
- (void)animateGrabberOutWithCompletion:(id /* block */)a0;
- (id)bezierPathFromCustomPath:(id)a0;
- (BOOL)clipDot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)dotIsVisibleInDocument:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPointedDown;
- (BOOL)isPointedLeft;
- (BOOL)isPointedRight;
- (BOOL)isPointedUp;
- (BOOL)isScaling;
- (void)redrawDotForScale:(double)a0;
- (BOOL)scroller:(id)a0 fullyContainSelectionRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)transitionDot:(long long)a0 completion:(id /* block */)a1;
- (void)updateDot;
- (void)updatePathForBoundsChangeIfNecessary;

@end
