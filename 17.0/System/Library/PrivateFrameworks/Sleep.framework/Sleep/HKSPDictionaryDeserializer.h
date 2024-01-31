@class NSSet, NSDictionary, NSMutableArray;

@interface HKSPDictionaryDeserializer : NSCoder

@property (readonly, nonatomic) NSSet *allowedClasses;
@property (readonly, nonatomic) unsigned long long serializationOptions;
@property (readonly, nonatomic) NSDictionary *serializedDictionary;
@property (readonly, nonatomic) NSMutableArray *stack;

- (float)decodeFloatForKey:(id)a0;
- (id)initWithAllowedClasses:(id)a0 serializedDictionary:(id)a1 serializationOptions:(unsigned long long)a2;
- (BOOL)allowsKeyedCoding;
- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (unsigned long long)hksp_serializationOptions;
- (double)decodeDoubleForKey:(id)a0;
- (id)deserializeObjectOfClass:(Class)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)decodeObjectForKey:(id)a0;
- (id)decodeTopLevelObjectOfClass:(Class)a0 forKey:(id)a1 error:(id *)a2;
- (int)decodeIntForKey:(id)a0;
- (id)_decodeObject:(id)a0 error:(id *)a1;
- (id)initWithAllowedClasses:(id)a0 serializedDictionary:(id)a1;
- (id)_decodeDeserializable:(id)a0 error:(id *)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;

@end
