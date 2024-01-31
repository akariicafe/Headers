@interface BLSBacklightChangeSourceEventDisplaySwipeMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) long long direction;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDirection:(long long)a0;

@end
