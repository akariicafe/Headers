@class NSString, NSDate;

@interface RMProtocolSynchronizationTokens : RMModelPayloadBase

@property (copy, nonatomic) NSDate *tokensTimestamp;
@property (copy, nonatomic) NSString *tokensDeclarationsToken;

+ (id)requestWithTimestamp:(id)a0 declarationsToken:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
