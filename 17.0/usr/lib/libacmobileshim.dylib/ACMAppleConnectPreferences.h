@class NSString, NSMutableDictionary;
@protocol ACMPreferencesStore;

@interface ACMAppleConnectPreferences : ACMPreferences <ACMAppleConnectPreferences>

@property (readonly, retain) NSMutableDictionary *environmentsContainer;
@property (nonatomic) NSString *recentUserName;
@property (nonatomic) int logLevel;
@property (copy, nonatomic) NSString *defaultUserName;
@property (nonatomic) BOOL shouldRememberPasswordInKeychain;
@property (retain) id<ACMPreferencesStore> preferencesStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)preferencesWithStore:(id)a0;

- (void)clearCache;
- (void)dealloc;
- (void)setUUID:(id)a0;
- (id)UUID;
- (id)allValuesWithOptions:(long long)a0;
- (void)cleanupOnMemoryWarning;
- (id)createEnvironmentWithRealm:(id)a0;
- (id)environmentPreferencesWithRealm:(id)a0;
- (id)initWithPreferencesStore:(id)a0;
- (id)principalPreferencesWithPrincipal:(id)a0;
- (void)purgeAllValues;
- (void)purgeAllValuesWithOptions:(long long)a0;
- (void)replaceAllValues:(id)a0 withOptions:(long long)a1;
- (BOOL)runsOn64BitsDevice;
- (void)savePreferencesIfNeeded;
- (void)setRunsOn64BitsDevice:(BOOL)a0;

@end
