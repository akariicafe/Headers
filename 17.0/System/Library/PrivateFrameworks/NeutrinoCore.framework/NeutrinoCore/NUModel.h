@class NSDictionary;

@interface NUModel : NSObject

@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)reservedPropertyNames;
+ (id)deserializeFromDictionary:(id)a0 error:(out id *)a1;
+ (id)supportedAttributes;
+ (id)requiredAttributes;
+ (BOOL)validateName:(id)a0 error:(out id *)a1;
+ (BOOL)validateNumber:(id)a0 error:(out id *)a1;
+ (id)_deserializeObjectOfClass:(Class)a0 fromDictionary:(id)a1 key:(id)a2 error:(out id *)a3;
+ (id)deserializeArrayFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
+ (id)deserializeDictionaryFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (id)deserializeStringFromDictionary:(id)a0 key:(id)a1 error:(out id *)a2;
+ (BOOL)validateArray:(id)a0 error:(out id *)a1;
+ (BOOL)validateBool:(id)a0 error:(out id *)a1;
+ (BOOL)validateIdentifier:(id)a0 error:(out id *)a1;
+ (BOOL)validatePattern:(id)a0 error:(out id *)a1;
+ (BOOL)validatePropertyName:(id)a0 error:(out id *)a1;
+ (BOOL)validateString:(id)a0 error:(out id *)a1;
+ (BOOL)validateStringArray:(id)a0 error:(out id *)a1;

- (void)enumerateProperties:(id /* block */)a0;
- (id)init;
- (id)deserialize:(id)a0 error:(out id *)a1;
- (BOOL)isValid:(out id *)a0;
- (id)serialize:(id)a0 error:(out id *)a1;
- (id)initWithAttributes:(id)a0;
- (BOOL)validate:(id)a0 error:(out id *)a1;
- (BOOL)serializeIntoDictionary:(id)a0 error:(out id *)a1;
- (BOOL)validateAttribute:(id)a0 value:(id)a1 error:(out id *)a2;
- (id)modelForProperty:(id)a0;
- (id)copy:(id)a0;
- (void).cxx_destruct;
- (id)serializeAsDictionary:(out id *)a0;
- (BOOL)serializeAttribute:(id)a0 value:(id)a1 intoDictionary:(id)a2 error:(out id *)a3;
- (BOOL)validateAttributes:(out id *)a0;

@end
