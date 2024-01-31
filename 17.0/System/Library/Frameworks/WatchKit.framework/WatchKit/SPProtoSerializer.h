@interface SPProtoSerializer : NSObject

+ (id)dataWithObject:(id)a0;
+ (id)objectWithData:(id)a0;
+ (id)protoSPObjectWithNumber:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithString:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithObject:(id)a0 forKey:(id)a1;
+ (id)arrayWithSPPlist:(id)a0;
+ (id)dictionaryWithSPPlist:(id)a0;
+ (id)numberWithSPProtoSockPuppetObject:(id)a0;
+ (id)protoSPObjectWithArray:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithData:(id)a0 forKey:(id)a1;
+ (id)protoSPObjectWithDictionary:(id)a0 forKey:(id)a1;
+ (id)spPlistWithArray:(id)a0;
+ (id)spPlistWithDictionary:(id)a0;

@end
