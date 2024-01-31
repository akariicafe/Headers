@class NSString;

@interface ACMPreferencesCFPreferencesStore : NSObject <ACMPreferencesCFPreferencesBasedStore>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesStoreWithCFPreferences;

- (id)allValues;
- (void)clearCache;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1;
- (void)removeAllValues;
- (id)preferencesValueForKey:(id)a0;
- (id)allValuesWithOptions:(long long)a0;
- (void)cleanupOnMemoryWarning;
- (id)multiplePreferencesValuesForKeys:(id)a0;
- (id)multiplePreferencesValuesForKeys:(id)a0 withOptions:(long long)a1;
- (struct __CFString { } *)preferenceID;
- (id)preferencesValueForKey:(id)a0 withOptions:(long long)a1;
- (void)removeAllValuesWithOptions:(long long)a0;
- (void)replaceAllValues:(id)a0 withOptions:(long long)a1;
- (void)savePreferencesIfNeeded;
- (void)setMultiplePreferencesValues:(id)a0;
- (void)setMultiplePreferencesValues:(id)a0 withOptions:(long long)a1;
- (void)setPreferencesValue:(id)a0 forKey:(id)a1 withOptions:(long long)a2;

@end
