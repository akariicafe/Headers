@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSProfilesCollection : NSObject <GCSProfiles> {
    id<GCUserDefaults> _userDefaults;
}

@property (retain, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)dealloc;
- (id)profileForIdentifier:(id)a0;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (BOOL)storeVersionIsCompatible;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)updateProfiles:(id)a0;

@end
