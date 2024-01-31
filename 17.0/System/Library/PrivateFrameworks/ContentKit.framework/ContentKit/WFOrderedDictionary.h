@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (unsigned long long)count;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithQueryItems:(id)a0;

@end
