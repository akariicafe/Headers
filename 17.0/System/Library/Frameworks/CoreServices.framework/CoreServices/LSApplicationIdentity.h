@class NSString;

@interface LSApplicationIdentity : LSBundleIdentity <NSSecureCoding, NSCopying> {
    NSString *_identityBookmark;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identityString;
@property (readonly, nonatomic) NSString *personaUniqueString;
@property (readonly, nonatomic) unsigned long long personaType;

+ (BOOL)personaWithUniqueString:(id)a0 getPersonaType:(unsigned long long *)a1 error:(id *)a2;
+ (id)identityStringsForApplicationWithBundleIdentifier:(id)a0 error:(id *)a1;
+ (unsigned int)classVersion;
+ (Class)currentIdentityClass;
+ (id)enumeratorWithOptions:(unsigned long long)a0;
+ (id)bundleIdentifierForIdentityString:(id)a0 error:(id *)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)bundleIdentifier;
- (void).cxx_destruct;
- (BOOL)needsMigration;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)findApplicationRecordWithError:(id *)a0;
- (id)findApplicationRecordFetchingPlaceholder:(long long)a0 error:(id *)a1;
- (id)initForRecord:(id)a0 personaWithAttributes:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 URL:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithBundleIdentifier:(id)a0 allowPlaceholder:(BOOL)a1 personaUniqueString:(id)a2 error:(id *)a3;
- (id)initWithIdentityBookmark:(id)a0 identityString:(id)a1 personaUniqueString:(id)a2 personaType:(unsigned long long)a3;
- (id)initWithIdentityString:(id)a0;
- (id)initWithIdentityString:(id)a0 parsedIdentityStringDictionary:(id)a1 error:(id *)a2;

@end
