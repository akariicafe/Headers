@class NSSet, NSString, NSArray, NSData, NSNumber, CEMCredentialSCEPDeclaration_SCEPSubjectAltName;

@interface CEMCredentialSCEPDeclaration_SCEP : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadURL;
@property (copy, nonatomic) NSString *payloadName;
@property (copy, nonatomic) NSArray *payloadSubject;
@property (copy, nonatomic) NSNumber *payloadKeysize;
@property (copy, nonatomic) NSString *payloadKeyType;
@property (copy, nonatomic) NSNumber *payloadKeyUsage;
@property (copy, nonatomic) NSData *payloadCAFingerprint;
@property (copy, nonatomic) NSNumber *payloadRetries;
@property (copy, nonatomic) NSNumber *payloadRetryDelay;
@property (copy, nonatomic) CEMCredentialSCEPDeclaration_SCEPSubjectAltName *payloadSubjectAltName;
@property (copy, nonatomic) NSNumber *payloadKeyIsExtractable;
@property (copy, nonatomic) NSString *payloadChallengeCredential;
@property (copy, nonatomic) NSNumber *payloadAllowAllAppsAccess;

+ (id)buildRequiredOnlyWithURL:(id)a0;
+ (id)buildWithURL:(id)a0 withName:(id)a1 withSubject:(id)a2 withKeysize:(id)a3 withKeyType:(id)a4 withKeyUsage:(id)a5 withCAFingerprint:(id)a6 withRetries:(id)a7 withRetryDelay:(id)a8 withSubjectAltName:(id)a9 withKeyIsExtractable:(id)a10 withChallengeCredential:(id)a11 withAllowAllAppsAccess:(id)a12;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
