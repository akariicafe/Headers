@interface _UIFluidSliderInteractionUpdate : NSObject

@property (nonatomic) double value;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trackBounds;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } trackTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } barFrame;
@property (nonatomic) long long interactionState;
@property (nonatomic, getter=isTracking) BOOL tracking;
@property (nonatomic) long long type;

@end
