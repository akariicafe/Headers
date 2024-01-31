@interface IKDeserializer : NSObject

+ (id)_URLForKey:(id)a0 inDictionary:(id)a1;
+ (id)_dateForKey:(id)a0 inDictionary:(id)a1;
+ (id)_normalizedObjectForKey:(id)a0 inDictionary:(id)a1;
+ (id)objectFromJSONString:(id)a0;
+ (BOOL)token:(id *)a0 andTokenSecret:(id *)a1 fromQlineString:(id)a2;

@end
