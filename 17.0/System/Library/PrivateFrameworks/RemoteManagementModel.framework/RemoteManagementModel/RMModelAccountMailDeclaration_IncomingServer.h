@class NSSet, NSString, NSNumber;

@interface RMModelAccountMailDeclaration_IncomingServer : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSString *payloadServerType;
@property (copy, nonatomic) NSString *payloadHostName;
@property (copy, nonatomic) NSNumber *payloadPort;
@property (copy, nonatomic) NSString *payloadAuthenticationMethod;
@property (copy, nonatomic) NSString *payloadAuthenticationCredentialsAssetReference;
@property (copy, nonatomic) NSString *payloadIMAPPathPrefix;

+ (id)buildRequiredOnlyWithServerType:(id)a0 hostName:(id)a1 authenticationMethod:(id)a2;
+ (id)buildWithServerType:(id)a0 hostName:(id)a1 port:(id)a2 authenticationMethod:(id)a3 authenticationCredentialsAssetReference:(id)a4 imapPathPrefix:(id)a5;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
