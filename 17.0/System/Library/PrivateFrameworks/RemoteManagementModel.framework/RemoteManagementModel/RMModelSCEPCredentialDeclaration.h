@class RMModelSCEPCredentialDeclaration_SubjectAltName, NSSet, NSString, NSArray, NSData, NSNumber;

@interface RMModelSCEPCredentialDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSArray *payloadSubject;
@property (copy, nonatomic) NSString *payloadChallenge;
@property (copy, nonatomic) NSNumber *payloadKeysize;
@property (copy, nonatomic) NSString *payloadKeyType;
@property (copy, nonatomic) NSNumber *payloadKeyUsage;
@property (copy, nonatomic) NSData *payloadCAFingerprint;
@property (copy, nonatomic) NSNumber *payloadRetries;
@property (copy, nonatomic) NSNumber *payloadRetryDelay;
@property (copy, nonatomic) RMModelSCEPCredentialDeclaration_SubjectAltName *payloadSubjectAltName;

+ (id)buildRequiredOnlyWithURL:(id)a0;
+ (id)buildWithURL:(id)a0 name:(id)a1 subject:(id)a2 challenge:(id)a3 keysize:(id)a4 keyType:(id)a5 keyUsage:(id)a6 caFingerprint:(id)a7 retries:(id)a8 retryDelay:(id)a9 subjectAltName:(id)a10;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
