@class NSString, NSArray;

@interface RMProtocolEnrollResponse : RMModelPayloadBase

@property (copy, nonatomic) NSString *responsePushTopic;
@property (copy, nonatomic) NSString *responsePushEnvironment;
@property (copy, nonatomic) NSArray *responseStatusItems;

+ (id)requestWithPushTopic:(id)a0 pushEnvironment:(id)a1 statusItems:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
