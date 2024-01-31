@interface SNKeyValueUtils : NSObject

+ (BOOL)removeKeyPath:(id)a0 fromObject:(id)a1 error:(id *)a2;
+ (BOOL)removeKey:(id)a0 fromDictionary:(id)a1 error:(id *)a2;
+ (BOOL)addKey:(id)a0 value:(id)a1 toDictionary:(id)a2 error:(id *)a3;
+ (BOOL)addKeyPath:(id)a0 value:(id)a1 toObject:(id)a2 error:(id *)a3;
+ (void)addObserver:(id)a0 forKeyPaths:(id)a1 ofObject:(id)a2 options:(unsigned long long)a3 context:(void *)a4;
+ (id)addObserverWithBlock:(id /* block */)a0 forKeyPaths:(id)a1 ofObject:(id)a2 options:(unsigned long long)a3 context:(void *)a4;
+ (BOOL)applyMutation:(id)a0 toObject:(id)a1 error:(id *)a2;
+ (BOOL)applyMutations:(id)a0 toObject:(id)a1 error:(id *)a2;
+ (id)dictionaryAddingKey:(id)a0 value:(id)a1 toDictionary:(id)a2 error:(id *)a3;
+ (id)dictionaryAddingKeyIfAbsent:(id)a0 value:(id)a1 toDictionary:(id)a2;
+ (id)dictionaryAssigningKey:(id)a0 value:(id)a1 inDictionary:(id)a2;
+ (id)dictionaryRemovingKey:(id)a0 fromDictionary:(id)a1 error:(id *)a2;
+ (id)dictionaryUpdatingKey:(id)a0 value:(id)a1 inDictionary:(id)a2 error:(id *)a3;
+ (id)keyForOptionalObject:(id)a0 inDictionary:(id)a1 error:(id *)a2;
+ (id)keyForRequiredObject:(id)a0 inDictionary:(id)a1 error:(id *)a2;
+ (id)mutationOfType:(long long)a0 keyPath:(id)a1 value:(id)a2 error:(id *)a3;
+ (id)objectForKey:(id)a0 satisfyingPredicate:(id /* block */)a1 fromDictionary:(id)a2;
+ (id)objectForOptionalKey:(id)a0 defaultValue:(id)a1 fromDictionary:(id)a2;
+ (id)objectForOptionalKey:(id)a0 fromDictionary:(id)a1;
+ (id)objectForRequiredKey:(id)a0 fromDictionary:(id)a1 error:(id *)a2;
+ (id)objectOfClass:(Class)a0 forKey:(id)a1 fromDictionary:(id)a2;
+ (id)objectOfClasses:(id)a0 forKey:(id)a1 fromDictionary:(id)a2;
+ (void)overrideValuesInObject:(id)a0 withValuesInDictionary:(id)a1;
+ (BOOL)overrideValuesInObject:(id)a0 withValuesInDictionary:(id)a1 dictionaryToObjectKeyMappings:(id)a2 error:(id *)a3;
+ (id)planToTransformInitialDictionary:(id)a0 intoFinalDictionary:(id)a1;
+ (id)planToTransformInitialDictionary:(id)a0 intoFinalDictionary:(id)a1 usingOnlyAddAndRemoveMutations:(BOOL)a2;
+ (void)removeObserver:(id)a0 forKeyPaths:(id)a1 ofObject:(id)a2 context:(void *)a3;
+ (id)requiredObjectForKey:(id)a0 satisfyingPredicate:(id /* block */)a1 fromDictionary:(id)a2 error:(id *)a3;
+ (id)requiredObjectOfClass:(Class)a0 forKey:(id)a1 fromDictionary:(id)a2 error:(id *)a3;
+ (id)requiredObjectOfClasses:(id)a0 forKey:(id)a1 fromDictionary:(id)a2 error:(id *)a3;
+ (id)transformedObjectForOptionalKey:(id)a0 fromDictionary:(id)a1 fallableTransform:(id /* block */)a2 error:(id *)a3;
+ (id)transformedObjectForOptionalKey:(id)a0 fromDictionary:(id)a1 transform:(id /* block */)a2;
+ (BOOL)updateKey:(id)a0 value:(id)a1 inDictionary:(id)a2 error:(id *)a3;
+ (BOOL)updateKeyPath:(id)a0 value:(id)a1 inObject:(id)a2 error:(id *)a3;
+ (id)usingAddAndRemoveOnlyRepresentMutation:(id)a0 error:(id *)a1;
+ (id)usingAddAndRemoveOnlyRepresentMutations:(id)a0 error:(id *)a1;

- (id)init;

@end
