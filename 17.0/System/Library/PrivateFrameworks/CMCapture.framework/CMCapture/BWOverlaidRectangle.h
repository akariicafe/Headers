@class BWRamp;

@interface BWOverlaidRectangle : NSObject

@property (readonly, nonatomic) int displayStyle;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) BOOL disappeared;
@property (nonatomic) int animationState;
@property (retain, nonatomic) BWRamp *rampAnimation;
@property (nonatomic) int numFramesFullyVisible;

- (void)dealloc;
- (id)initWithDisplayStyle:(int)a0;

@end
