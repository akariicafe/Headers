@interface TSUIntegerKeyDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    struct __CFDictionary { } *mDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)allValues;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(long long)a0;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueEnumerator;
- (struct __CFDictionary { } *)p_cfDictionary;

@end
