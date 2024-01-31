@class NSSet, NSString;

@interface CEMSecretCredentialsDeclaration : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadSecret;

+ (id)buildRequiredOnlyWithSecret:(id)a0;
+ (id)buildWithSecret:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
