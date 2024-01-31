@class NSSet, NSString, RMModelAnyPayload;

@interface RMProtocolCommandRequest_StatusReason : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedRequestKeys;

@property (copy, nonatomic) NSString *requestCode;
@property (copy, nonatomic) NSString *requestDescription;
@property (copy, nonatomic) RMModelAnyPayload *requestDetails;

+ (id)buildRequiredOnlyWithCode:(id)a0;
+ (id)buildWithCode:(id)a0 description:(id)a1 details:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
