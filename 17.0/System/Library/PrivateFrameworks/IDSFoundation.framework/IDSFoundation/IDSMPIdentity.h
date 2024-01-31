@interface IDSMPIdentity : NSObject <NSCopying>

@property (readonly, nonatomic) void *backingValue;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBackingValue:(void *)a0;

@end
