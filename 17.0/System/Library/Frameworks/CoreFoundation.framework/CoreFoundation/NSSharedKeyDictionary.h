@class NSMutableDictionary, NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary {
    NSSharedKeySet *_keyMap;
    unsigned long long _count;
    id *_values;
    void /* function */ *_ifkIMP;
    NSMutableDictionary *_sideDic;
    unsigned long long _mutations;
    BOOL _doKVO;
}

+ (id)sharedKeyDictionaryWithKeySet:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (BOOL)_subclassesMustBeExplicitlyMentionedWhenDecoded;

- (id)keySet;
- (void)getObjects:(id *)a0 andKeys:(id *)a1 count:(unsigned long long)a2;
- (void)dealloc;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)keyEnumerator;
- (void)encodeWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (Class)classForCoder;
- (void)setObservationInfo:(void *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKeySet:(id)a0;
- (id)objectForKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
