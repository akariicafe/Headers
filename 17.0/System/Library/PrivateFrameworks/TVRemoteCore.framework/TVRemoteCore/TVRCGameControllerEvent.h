@interface TVRCGameControllerEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic, getter=isDown) BOOL down;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } joystickLocation;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithTimestamp:(double)a0 isDown:(BOOL)a1 joystickLocation:(struct CGPoint { double x0; double x1; })a2;

@end
