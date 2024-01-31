@class NSArray;

@interface DMCProtocolWellKnownResponse : DMCModelPayloadBase

@property (copy, nonatomic) NSArray *responseServers;

+ (id)requestWithServers:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
