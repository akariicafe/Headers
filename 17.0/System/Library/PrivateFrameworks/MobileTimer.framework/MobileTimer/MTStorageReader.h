@class NSCoder, NSMutableArray;

@interface MTStorageReader : NSCoder <MTSerializer>

@property (retain, nonatomic) NSMutableArray *stack;
@property (readonly, nonatomic) unsigned long long mtType;
@property (readonly, nonatomic) NSCoder *mtCoder;

+ (id)_unwrap:(id)a0;
+ (BOOL)_dictionaryIsForSerializableObject:(id)a0;

- (float)decodeFloatForKey:(id)a0;
- (id)initWithEncodedDictionary:(id)a0;
- (BOOL)allowsKeyedCoding;
- (long long)decodeIntegerForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (id)_decodeObject:(id)a0;
- (void).cxx_destruct;
- (id)decodeObjectForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (id)_objectForDictionary:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;

@end
