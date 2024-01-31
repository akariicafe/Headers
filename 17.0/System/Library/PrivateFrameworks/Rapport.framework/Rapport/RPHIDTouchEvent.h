@interface RPHIDTouchEvent : NSObject

@property (nonatomic) int finger;
@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (nonatomic) int phase;
@property (nonatomic) double timestampSeconds;

@end
