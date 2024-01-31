@interface DACDeviceRole : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long flags;

+ (id)unknownRole;

- (unsigned long long)hash;
- (BOOL)isPrimary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isUnknown;
- (BOOL)satisfiesRole:(id)a0;
- (id)_initWithRoleFlags:(unsigned long long)a0;

@end
