@class NSString, RMModelAnyPayload;

@interface RMProtocolEnrollRequest : RMModelPayloadBase

@property (copy, nonatomic) NSString *requestEnrollmentToken;
@property (copy, nonatomic) RMModelAnyPayload *requestStatusItems;

+ (id)requestWithEnrollmentToken:(id)a0 statusItems:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
