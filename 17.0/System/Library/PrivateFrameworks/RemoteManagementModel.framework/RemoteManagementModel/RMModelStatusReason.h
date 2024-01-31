@class NSSet, NSString, RMModelAnyPayload;

@interface RMModelStatusReason : RMModelPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSString *statusCode;
@property (copy, nonatomic) NSString *statusDescription;
@property (copy, nonatomic) RMModelAnyPayload *statusDetails;

+ (id)buildRequiredOnlyWithCode:(id)a0;
+ (id)buildWithCode:(id)a0 description:(id)a1 details:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
