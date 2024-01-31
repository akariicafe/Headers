@class NSString;
@protocol GCSControllers, GCSMouseProfiles, GCSCopilotFusedControllers, GCSProfiles, GCUserDefaults, GCSGames;

@interface GCSSettingsStore : NSObject <GCSSettingsStoreService> {
    id<GCUserDefaults> _defaults;
}

@property (retain, nonatomic) NSString *settingsVersion;
@property (readonly, nonatomic) id<GCSGames> games;
@property (readonly, nonatomic) id<GCSProfiles> profiles;
@property (readonly, nonatomic) id<GCSMouseProfiles> mouseProfiles;
@property (readonly, nonatomic) id<GCSControllers> controllers;
@property (readonly, nonatomic) id<GCSCopilotFusedControllers> copilotFusedControllers;
@property BOOL showGCPreferencesPane;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUserDefaults:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)savedDataMeetsRequiredVersion:(id)a0;
- (id)profileForPersistentControllerIdentifier:(id)a0 appBundleIdentifier:(id)a1;

@end
