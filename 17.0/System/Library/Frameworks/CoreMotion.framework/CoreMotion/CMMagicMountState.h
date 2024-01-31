@interface CMMagicMountState : CMLogItem

@property (readonly, nonatomic, getter=isMounted) BOOL mounted;
@property (readonly, nonatomic) long long mountStatus;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMountStatus:(long long)a0 timestamp:(double)a1;

@end
