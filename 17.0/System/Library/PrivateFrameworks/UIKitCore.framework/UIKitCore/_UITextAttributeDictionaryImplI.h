@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> _fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}

+ (BOOL)_isMutable;
+ (Class)_storageClass;
+ (Class)_ignoringClass;

- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isNSDictionary__;
- (id)fallback;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)_removeFallbackFromStorage;
- (id)keyEnumerator;
- (unsigned long long)count;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)_fullDictionary;
- (BOOL)usesFallbackForKey:(id)a0;
- (id)_keysIfThereIsFallback;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithDictionary:(id)a0 copyItems:(BOOL)a1 fallback:(id)a2;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (id)sparseDictionary;
- (id)initWithFallback:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithStorage:(id)a0 fallback:(id)a1 ignoring:(id)a2;

@end
