@interface _UIKBRTDecayingOffset : _UIKBRTDecayingObject {
    BOOL _limitMovement;
    struct CGPoint { double x; double y; } _offset;
}

@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } offset;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } originalOffset;

- (void)reset;
- (void)updateOffsetTo:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithTimeoutDuration:(double)a0 limitMovement:(BOOL)a1;

@end
