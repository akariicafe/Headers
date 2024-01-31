@class value;

@interface NSSimpleAttributeDictionary : NSDictionary {
    unsigned int numElements;
    unsigned int refCount;
    struct _NSSimpleAttributeDictionaryElement { unsigned long long hash; value *key; id x0; } elements[1];
}

+ (id)newWithDictionary:(id)a0;
+ (id)emptyAttributeDictionary;

- (void)dealloc;
- (id)keyEnumerator;
- (unsigned long long)count;
- (id)newWithKey:(id)a0 object:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)slotForKey:(id)a0;

@end
