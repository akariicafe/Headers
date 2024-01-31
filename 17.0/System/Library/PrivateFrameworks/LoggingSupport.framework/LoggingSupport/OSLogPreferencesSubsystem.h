@class NSString, NSArray, NSDictionary, NSMutableDictionary;

@interface OSLogPreferencesSubsystem : NSObject {
    NSDictionary *_systemPrefs;
    NSString *_internalPrefsFile;
    NSDictionary *_internalPrefs;
    NSString *_prefsFile;
    NSMutableDictionary *_prefs;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *categories;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) long long effectiveEnabledLevel;
@property (readonly, nonatomic) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic) long long persistedLevel;

- (void)reset;
- (void)resetAll;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)_setPersistedLevel:(long long)a0 forCategory:(id)a1;
- (void)_resetCategory:(id)a0;
- (long long)_defaultEnabledLevelForCategory:(id)a0;
- (long long)_defaultPersistedLevelForCategory:(id)a0;
- (long long)_enabledLevelForCategory:(id)a0;
- (id)_levelPrefsForCategory:(id)a0;
- (long long)_persistedLevelForCategory:(id)a0;
- (id)_prefsForCategory:(id)a0;
- (void)_setEnabledLevel:(long long)a0 forCategory:(id)a1;
- (void)_setSignpostAllowStreaming:(BOOL)a0 forCategory:(id)a1;
- (void)_setSignpostBacktracesEnabled:(BOOL)a0 forCategory:(id)a1;
- (void)_setSignpostEnabled:(BOOL)a0 forCategory:(id)a1;
- (void)_setSignpostPersisted:(BOOL)a0 forCategory:(id)a1;
- (BOOL)_signpostAllowStreamingForCategory:(id)a0;
- (BOOL)_signpostBacktracesEnabledForCategory:(id)a0;
- (BOOL)_signpostEnabledForCategory:(id)a0;
- (BOOL)_signpostPersistedForCategory:(id)a0;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;

@end
