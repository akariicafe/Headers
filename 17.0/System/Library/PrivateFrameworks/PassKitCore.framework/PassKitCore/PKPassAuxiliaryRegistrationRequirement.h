@class NSString;

@interface PKPassAuxiliaryRegistrationRequirement : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) long long registrationBackoffCounter;
@property (readonly, nonatomic) unsigned long long role;
@property (readonly, nonatomic) long long numberOfKeys;
@property (readonly, nonatomic) BOOL canLocallyInvalidateRegistrationState;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyInto:(id)a0;
- (id)_mutableDictionaryRepresentation;
- (BOOL)isEqualToPassAuxiliaryRegistrationRequirement:(id)a0;

@end
