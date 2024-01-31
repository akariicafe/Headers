@class NSArray, NSNumber, RMModelAnyPayload;

@interface RMProtocolStatusReport : RMModelPayloadBase

@property (copy, nonatomic) RMModelAnyPayload *reportStatusItems;
@property (copy, nonatomic) NSArray *reportErrors;
@property (copy, nonatomic) NSNumber *reportFullReport;

+ (id)requestWithStatusItems:(id)a0 errors:(id)a1 fullReport:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
