@interface PKPassAuxiliaryRegistrationSignatureRequirement : PKPassAuxiliaryRegistrationRequirement

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) unsigned long long signatureSchemeVersion;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (unsigned long long)role;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationSignatureRequirement:(id)a0;

@end
