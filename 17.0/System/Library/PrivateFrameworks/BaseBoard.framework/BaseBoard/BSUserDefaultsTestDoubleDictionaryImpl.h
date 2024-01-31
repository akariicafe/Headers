@class NSMutableDictionary;

@interface BSUserDefaultsTestDoubleDictionaryImpl : NSUserDefaults {
    NSMutableDictionary *_dictionary;
}

- (id)init;
- (id)arrayForKey:(id)a0;
- (void)registerDefaults:(id)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (float)floatForKey:(id)a0;
- (void)setFloat:(float)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setInteger:(long long)a0 forKey:(id)a1;
- (id)URLForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (double)doubleForKey:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (long long)integerForKey:(id)a0;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)dataForKey:(id)a0;
- (void)setDouble:(double)a0 forKey:(id)a1;
- (void)setURL:(id)a0 forKey:(id)a1;
- (id)stringArrayForKey:(id)a0;

@end
