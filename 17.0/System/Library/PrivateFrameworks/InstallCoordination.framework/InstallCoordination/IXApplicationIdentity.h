@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;
@property (nonatomic) BOOL isPersonalPersonaPlaceholder;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (BOOL)resolvePersonaWithError:(id *)a0;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (BOOL)resolvePersonaRespectingSandboxingWithError:(id *)a0;
- (id)description;
- (id)resolvePersonaUsingModuleSpecificLogicWithError:(id *)a0;
- (id)possibleSerializationsForPlistKey;
- (id)initWithPlistKeySerialization:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)canonicalSerializationForPlistKey;

@end
