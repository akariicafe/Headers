@class NSString, RMModelAnyPayload;

@interface RMProtocolDeclarationResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responseType;
@property (copy, nonatomic) NSString *responseIdentifier;
@property (copy, nonatomic) NSString *responseServerToken;
@property (copy, nonatomic) RMModelAnyPayload *responsePayload;

+ (id)requestWithType:(id)a0 identifier:(id)a1 serverToken:(id)a2 payload:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
