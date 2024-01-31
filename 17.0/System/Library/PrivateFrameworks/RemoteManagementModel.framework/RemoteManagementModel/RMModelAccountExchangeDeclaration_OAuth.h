@class NSSet, NSNumber, NSString;

@interface RMModelAccountExchangeDeclaration_OAuth : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedPayloadKeys;

@property (copy, nonatomic) NSNumber *payloadEnabled;
@property (copy, nonatomic) NSString *payloadSignInURL;
@property (copy, nonatomic) NSString *payloadTokenRequestURL;

+ (id)buildRequiredOnlyWithEnabled:(id)a0;
+ (id)buildWithEnabled:(id)a0 signInURL:(id)a1 tokenRequestURL:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
