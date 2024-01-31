@class NSSet, NSString;

@interface DMCProtocolWellKnownResponse_WellKnownResponseServer : DMCModelPayloadBase

@property (class, readonly, copy) NSSet *allowedResponseKeys;

@property (copy, nonatomic) NSString *responseVersion;
@property (copy, nonatomic) NSString *responseBaseURL;

+ (id)buildRequiredOnlyWithVersion:(id)a0 baseURL:(id)a1;
+ (id)buildWithVersion:(id)a0 baseURL:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadFromDictionary:(id)a0 serializationType:(short)a1 error:(id *)a2;
- (id)serializeWithType:(short)a0;

@end
