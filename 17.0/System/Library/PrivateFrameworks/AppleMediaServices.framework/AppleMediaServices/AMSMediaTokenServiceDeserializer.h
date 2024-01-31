@interface AMSMediaTokenServiceDeserializer : NSObject

+ (id)mediaTokenFromDictionary:(id)a0 error:(id *)a1;
+ (id)_correctPayload:(id)a0;
+ (id)_deserializeMediaTokenDictionary:(id)a0;

@end
