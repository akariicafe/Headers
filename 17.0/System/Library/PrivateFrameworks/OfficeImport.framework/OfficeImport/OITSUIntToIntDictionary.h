@interface OITSUIntToIntDictionary : NSObject <NSCopying, NSMutableCopying> {
    struct __CFDictionary { } *mDictionary;
}

- (BOOL)containsKey:(long long)a0;
- (id)allValues;
- (id)init;
- (void)dealloc;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)description;
- (void)setInt:(long long)a0 forKey:(long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateKeysAndValuesUsingBlock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)intForKey:(long long)a0;
- (void)applyFromIntToIntDictionary:(id)a0;
- (id)arrayOfBoxedKeys;
- (BOOL)intIsPresentForKey:(long long)a0 outValue:(long long *)a1;
- (struct __CFDictionary { } *)p_cfDictionary;
- (void)removeAllInts;
- (void)removeIntForKey:(long long)a0;

@end
