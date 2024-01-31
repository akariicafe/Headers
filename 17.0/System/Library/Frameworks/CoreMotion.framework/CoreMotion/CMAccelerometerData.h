@interface CMAccelerometerData : CMLogItem {
    id _internal;
}

@property (readonly, nonatomic) struct { double x0; double x1; double x2; } acceleration;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAcceleration:(struct { float x0; float x1; float x2; })a0 andTimestamp:(double)a1;

@end
