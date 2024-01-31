@class NSString;

@interface PKPassAuxiliaryRegistrationDecryptionRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long usage;
@property (readonly, nonatomic) unsigned long long decryptionSchemeVersion;
@property (readonly, nonatomic) NSString *groupIdentifier;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (unsigned long long)role;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationDecryptionRequirement:(id)a0;

@end
