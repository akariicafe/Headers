@interface BLSBacklightChangeSourceEventSuppressionMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long reason;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithXPCDictionary:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(unsigned long long)a0 reason:(unsigned long long)a1;

@end
