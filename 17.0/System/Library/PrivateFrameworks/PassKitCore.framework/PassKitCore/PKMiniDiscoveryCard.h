@interface PKMiniDiscoveryCard : PKDiscoveryCard

@property (readonly, nonatomic) long long miniCardTemplateType;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
