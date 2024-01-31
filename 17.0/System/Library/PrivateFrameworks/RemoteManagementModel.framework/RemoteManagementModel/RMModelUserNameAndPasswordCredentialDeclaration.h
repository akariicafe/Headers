@class NSSet, NSString;

@interface RMModelUserNameAndPasswordCredentialDeclaration : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadPassword;

+ (id)buildRequiredOnlyWithUserName:(id)a0;
+ (id)buildWithUserName:(id)a0 password:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
