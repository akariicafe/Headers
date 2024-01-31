@protocol UICoordinateSpace;

@interface PXViewLayoutHelper : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _containerBounds;
    id<UICoordinateSpace> _coordinateSpace;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _transform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _reverseTransform;
}

@property (class, nonatomic) long long userInterfaceLayoutDirection;

+ (void)initialize;
+ (void)performLayoutWithinView:(id)a0 usingBlock:(id /* block */)a1;

- (id)init;
- (void)_tearDown;
- (id)_init;
- (void).cxx_destruct;
- (void)_setUpWithView:(id)a0;
- (double)trailingOfView:(id)a0;
- (void)_getFirstBaseline:(double *)a0 lastBaseline:(double *)a1 forView:(id)a2 withSize:(struct CGSize { double x0; double x1; })a3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_orientedFrameOfView:(id)a0;
- (void)_setOrientedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forView:(id)a1;
- (double)bottomOfView:(id)a0;
- (double)firstBaselineOfView:(id)a0;
- (double)horizontalCenterOfView:(id)a0;
- (double)lastBaselineOfView:(id)a0;
- (void)layoutView:(id)a0 withAttributes:(const struct { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; } *)a1;
- (double)leadingOfView:(id)a0;
- (double)topOfView:(id)a0;
- (double)verticalCenterOfView:(id)a0;

@end
