@protocol _DKSimpleKeyValueStore;

@interface _DKKeyValueStore : NSObject <_DKKeyValueStore> {
    id<_DKSimpleKeyValueStore> _store;
}

+ (id)standardUserDefaultsKeyValueStore;

- (void)setString:(id)a0 forKey:(id)a1;
- (id)arrayForKey:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setArray:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)numberForKey:(id)a0;
- (void)setDictionary:(id)a0 forKey:(id)a1;
- (void)setData:(id)a0 forKey:(id)a1;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (id)initWithSimpleKeyValueStore:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (id)dateForKey:(id)a0;
- (id)objectForKey:(id)a0 havingClass:(Class)a1;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setNumber:(id)a0 forKey:(id)a1;
- (void)setDate:(id)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;

@end
