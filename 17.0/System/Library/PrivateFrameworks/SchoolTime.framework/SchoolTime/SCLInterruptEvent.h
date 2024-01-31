@class SCLContact;

@interface SCLInterruptEvent : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long urgency;
@property (readonly, nonatomic) SCLContact *sender;
@property (readonly, nonatomic) BOOL shouldAlwaysInterrupt;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)shouldAlwaysInterrupt;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithEvent:(id)a0;
- (id)_initWithType:(unsigned long long)a0 urgency:(unsigned long long)a1 sender:(id)a2;

@end
