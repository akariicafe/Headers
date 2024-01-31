@interface _UITextAttributeDictionaryImplM : _UITextAttributeDictionaryImplI

+ (BOOL)_isMutable;
+ (Class)_storageClass;
+ (Class)_ignoringClass;

- (void)removeAllObjects;
- (void)_removeFallbackFromStorage;
- (void)setFallback:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setIgnoresFallback:(BOOL)a0 forKey:(id)a1;

@end
