@class NSString, RMProtocolSynchronizationTokens;

@interface RMProtocolPushMessage : RMModelPayloadBase

@property (copy, nonatomic) NSString *messageEnrollmentToken;
@property (copy, nonatomic) RMProtocolSynchronizationTokens *messageSyncTokens;

+ (id)requestWithEnrollmentToken:(id)a0 syncTokens:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
