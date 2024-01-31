@class NSSet, NSDictionary;

@interface LSBundleInfoCachedValues : LSPropertyList

@property (readonly, nonatomic) NSSet *allKeys;
@property (readonly, nonatomic) NSDictionary *rawValues;

- (id)objectForKey:(id)a0 ofClass:(Class)a1;
- (id)objectForKey:(id)a0 ofClass:(Class)a1 valuesOfClass:(Class)a2;
- (id)objectsForKeys:(id)a0;
- (id)init;
- (id)arrayForKey:(id)a0;
- (id)_expensiveDictionaryRepresentation;
- (id)dictionaryForKey:(id)a0 valuesOfClass:(Class)a1;
- (id)objectForKey:(id)a0 ofType:(Class)a1;
- (BOOL)boolForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (id)URLForKey:(id)a0;
- (id)arrayForKey:(id)a0 withValuesOfClass:(Class)a1;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)_initWithKeys:(id)a0 forDictionary:(id)a1;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
