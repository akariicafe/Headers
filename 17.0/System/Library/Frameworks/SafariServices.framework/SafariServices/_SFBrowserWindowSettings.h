@class NSMutableDictionary;

@interface _SFBrowserWindowSettings : NSObject {
    NSMutableDictionary *_settingsDictionary;
    BOOL _synchronizeScheduled;
}

@property (class, readonly, nonatomic) _SFBrowserWindowSettings *settings;

@property (readonly, nonatomic) BOOL hasPrivateBrowsingWindow;
@property (nonatomic) BOOL invalidatesClosedWindows;

+ (void)setSharedSettings:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)synchronize;
- (void)_synchronizeNow;
- (id)_blankSnapshotKeyForPrivateBrowsing:(BOOL)a0 syncableTabGroupUUID:(id)a1;
- (BOOL)_boolValueForKey:(id)a0 windowUUID:(id)a1;
- (void)_initializeSettingsDictionaryIfNeeded;
- (id)_numberForKey:(id)a0 windowUUID:(id)a1;
- (void)_setBool:(BOOL)a0 forKey:(id)a1 windowUUID:(id)a2;
- (void)_setString:(id)a0 forKey:(id)a1 windowUUID:(id)a2;
- (id)_stringForKey:(id)a0 windowUUID:(id)a1;
- (BOOL)activeDocumentIsValidForWindowWithUUID:(id)a0;
- (id)blankSnapshotGroupIdentifierForPrivateBrowsing:(BOOL)a0 syncableTabGroupUUID:(id)a1 forWindowWithUUID:(id)a2;
- (id)dataForKey:(id)a0 forWindowWithUUID:(id)a1;
- (BOOL)isShowingTabViewForWindowWithUUID:(id)a0;
- (BOOL)privateBrowsingEnabledForWindowWithUUID:(id)a0;
- (void)removeWindowWithUUID:(id)a0;
- (void)setActiveDocumentIsValid:(BOOL)a0 forWindowWithUUID:(id)a1;
- (void)setBlankSnapshotGroupIdentifier:(id)a0 forPrivateBrowsing:(BOOL)a1 syncableTabGroupUUID:(id)a2 forWindowWithUUID:(id)a3;
- (void)setData:(id)a0 forKey:(id)a1 forWindowWithUUID:(id)a2;
- (void)setIsShowingTabView:(BOOL)a0 forWindowWithUUID:(id)a1;
- (void)setPrivateBrowsingEnabled:(BOOL)a0 forWindowWithUUID:(id)a1;
- (void)validateWindowSettingsWithUUIDs:(id)a0;

@end
