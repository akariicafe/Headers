@class NSMutableDictionary;

@interface CalDefaultDictionary : NSObject <NSCopying> {
    Class _defaultClass;
    NSMutableDictionary *_dict;
}

- (void)setDictionary:(id)a0;
- (void)removeAllObjects;
- (id)keys;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithDefaultClass:(Class)a0;
- (id)deepCopy;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)finalDictionary;
- (id)_copyWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)_mutableCopyOfFinalDictionaryWithZone:(struct _NSZone { } *)a0 isDeepCopy:(BOOL)a1;
- (id)existingObjectForKey:(id)a0;

@end
