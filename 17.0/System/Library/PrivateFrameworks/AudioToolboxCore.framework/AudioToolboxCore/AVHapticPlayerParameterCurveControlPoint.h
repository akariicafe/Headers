@interface AVHapticPlayerParameterCurveControlPoint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double time;
@property float value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTime:(double)a0 value:(float)a1;

@end
