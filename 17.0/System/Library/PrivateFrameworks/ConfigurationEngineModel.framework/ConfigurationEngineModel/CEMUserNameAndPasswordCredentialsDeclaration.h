@class NSSet, NSString;

@interface CEMUserNameAndPasswordCredentialsDeclaration : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadUserName;
@property (copy, nonatomic) NSString *payloadPassword;

+ (id)buildWithUserName:(id)a0 withPassword:(id)a1;
+ (id)buildRequiredOnlyWithUserName:(id)a0 withPassword:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
