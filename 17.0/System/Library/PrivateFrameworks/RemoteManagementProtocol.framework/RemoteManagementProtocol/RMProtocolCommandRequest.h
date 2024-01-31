@class NSString, NSArray, RMModelAnyPayload;

@interface RMProtocolCommandRequest : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestStatus;
@property (copy, nonatomic) NSString *requestIdentifier;
@property (copy, nonatomic) RMModelAnyPayload *requestResult;
@property (copy, nonatomic) NSArray *requestReasons;

+ (id)requestWithStatus:(id)a0 identifier:(id)a1 result:(id)a2 reasons:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
