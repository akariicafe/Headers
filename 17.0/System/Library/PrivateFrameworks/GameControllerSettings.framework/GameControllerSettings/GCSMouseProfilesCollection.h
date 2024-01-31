@class NSArray;
@protocol GCUserDefaults, GCSSettingsStoreService;

@interface GCSMouseProfilesCollection : NSObject <GCSMouseProfiles> {
    id<GCUserDefaults> _userDefaults;
}

@property (copy, nonatomic) NSArray *values;
@property (readonly, weak, nonatomic) id<GCSSettingsStoreService> settingsStore;

- (void)dealloc;
- (id)initWithSettingsStore:(id)a0 userDefaults:(id)a1;
- (BOOL)storeVersionIsCompatible;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)mouseProfileForBundleIdentifier:(id)a0;
- (void)updateMouseProfiles:(id)a0;

@end
