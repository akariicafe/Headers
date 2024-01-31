@class NSSet, NSString, NSArray, NSNumber, RMModelACMECredentialDeclaration_SubjectAltName;

@interface RMModelACMECredentialDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadDirectoryURL;
@property (copy, nonatomic) NSString *payloadClientIdentifier;
@property (copy, nonatomic) NSNumber *payloadKeySize;
@property (copy, nonatomic) NSString *payloadKeyType;
@property (copy, nonatomic) NSNumber *payloadHardwareBound;
@property (copy, nonatomic) NSArray *payloadSubject;
@property (copy, nonatomic) RMModelACMECredentialDeclaration_SubjectAltName *payloadSubjectAltName;
@property (copy, nonatomic) NSNumber *payloadUsageFlags;
@property (copy, nonatomic) NSArray *payloadExtendedKeyUsage;
@property (copy, nonatomic) NSNumber *payloadAttest;

+ (id)buildWithDirectoryURL:(id)a0 clientIdentifier:(id)a1 keySize:(id)a2 keyType:(id)a3 hardwareBound:(id)a4 subject:(id)a5 subjectAltName:(id)a6 usageFlags:(id)a7 extendedKeyUsage:(id)a8 attest:(id)a9;
+ (id)buildRequiredOnlyWithDirectoryURL:(id)a0 clientIdentifier:(id)a1 keySize:(id)a2 keyType:(id)a3 hardwareBound:(id)a4 subject:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
