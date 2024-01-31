@interface CMWakeGestureEvent : CMLogItem

@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) int orientation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithState:(long long)a0 type:(long long)a1 orientation:(int)a2 timestamp:(double)a3;

@end
