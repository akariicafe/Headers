@class NSDictionary;

@interface UIPeripheralHostState : NSObject

@property (nonatomic) struct UIPeripheralAnimationGeometry { struct CGPoint { double x; double y; } outPosition; struct CGPoint { double x; double y; } inPosition; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds; struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform; double targetFrameHeightDelta; } geometry;
@property (retain, nonatomic) NSDictionary *screenGeometry;
@property (nonatomic) BOOL inPositionIsDestination;

+ (id)stateWithGeometry:(struct UIPeripheralAnimationGeometry { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; double x4; })a0 inPositionIsDestination:(BOOL)a1;

- (void)dealloc;
- (void).cxx_destruct;

@end
