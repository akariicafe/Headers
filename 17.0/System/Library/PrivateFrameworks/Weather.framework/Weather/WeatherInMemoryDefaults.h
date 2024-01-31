@class NSString, NSMutableDictionary;

@interface WeatherInMemoryDefaults : NSObject <WeatherPreferencesPersistence>

@property (retain) NSMutableDictionary *inMemoryStore;
@property (readonly) BOOL synchronizeWasCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)arrayForKey:(id)a0;
- (void)synchronizeWithCompletionHandler:(id /* block */)a0;
- (BOOL)boolForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)dictionaryForKey:(id)a0;
- (BOOL)synchronize;
- (id)stringForKey:(id)a0;
- (id)objectForKey:(id)a0;

@end
