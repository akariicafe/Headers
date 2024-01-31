@class NSString, NSArray, NSDictionary, BSOrderedDictionaryKeyStrategy;

@interface BSOrderedDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration, BSStandardCollection, BSDescriptionStreamable> {
    NSArray *_keys;
    NSDictionary *_values;
    BSOrderedDictionaryKeyStrategy *_keyOrderingStrategy;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allValues;
- (id)init;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (void)encodeWithCoder:(id)a0;
- (id)unorderedDictionary;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initTabulaRasa;
- (id)filter:(id /* block */)a0;
- (void)enumerateKeysAndObjectsWithIndexesUsingBlock:(id /* block */)a0;
- (id)initWithDictionary:(id)a0 keyOrderingStrategy:(id)a1;
- (id)sortedDictionaryUsingComparator:(id /* block */)a0;
- (id)subdictionaryWithRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
