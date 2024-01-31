@class NSArray, NSString, WBSStartPageSectionManager;

@interface WBSettingsSyncEngineAccess : NSObject <WBSSettingsSyncEngineAccess> {
    WBSStartPageSectionManager *_lazyStartPageSectionsManager;
}

@property (readonly, nonatomic) NSArray *syncSettingsUpDictionary;
@property (readonly, nonatomic) BOOL backgroundImageExists;
@property (readonly, nonatomic) BOOL backgroundImageAppearanceIsLight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didReceiveRemoteCloudSettingsUpdateWithRecord:(id)a0;
- (long long)_settingForValue:(id)a0;
- (id)_startPageSectionOrder;
- (void)_updateStartPageSectionVisibilityWithIdentifier:(id)a0 record:(id)a1;
- (void)_updatePerSiteSettingsWithRecord:(id)a0;
- (id)_perSitePreferencesStore;
- (id)_deviceClass;
- (BOOL)_isKnownPerSiteSetting:(id)a0;
- (void).cxx_destruct;
- (void)_updateStartPageSectionOrder:(id)a0;
- (id)startPageSectionsManager;
- (BOOL)syncEnabled;
- (void)_updatePerSiteSettingsWithRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)_didUpdateStartPageBackgroundImageVisibilityWithRecord:(id)a0;
- (void)_updateStartPageBackgroundImageWithRecord:(id)a0;
- (BOOL)_isShowBackgroundImageEnabled;
- (void)deleteBackgroundImageDirectory;
- (void)didDeleteRemoteRecordWithID:(id)a0;

@end
