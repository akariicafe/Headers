@class UIColor;

@interface PUParallaxLayerLayoutInfo : NSObject

@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } settlingEffectFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } headroomFrame;
@property (readonly, nonatomic) BOOL styleIsHighKey;
@property (readonly, nonatomic) UIColor *primaryStyleColor;
@property (readonly, nonatomic) double headroomVisibilityAmount;
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } parallaxVector;
@property (readonly, nonatomic) double parallaxAmount;
@property (readonly, nonatomic) double visibilityAmount;
@property (readonly, nonatomic) unsigned long long visibilityEdge;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } additionalContentTransform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } additionalTransform;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceOrientation:(long long)a0 containerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 visibleFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 settlingEffectFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 headroomFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 headroomVisibilityAmount:(double)a5 styleIsHighKey:(BOOL)a6 primaryStyleColor:(id)a7 canApplyParallax:(BOOL)a8 parallaxVector:(struct CGPoint { double x0; double x1; })a9 parallaxAmount:(double)a10 visibilityAmount:(double)a11 visibilityEdge:(unsigned long long)a12;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewFrameForLayerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
