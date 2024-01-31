@class NSXPCListener, NSString, UNCEffectiveSettings, UNCNotificationSettingsPersistentStore, UNCSectionInfoStore, NSMutableArray, UNCBulletinDefaults;

@interface UNCSettingsPersistenceConnectionListener : NSObject <NSXPCListenerDelegate, UNCSettingsPersistenceServerInterface> {
    NSMutableArray *_connections;
    NSXPCListener *_listener;
    UNCNotificationSettingsPersistentStore *_persistentSettingsStore;
    UNCBulletinDefaults *_bulletinDefaults;
    UNCEffectiveSettings *_effectiveSettingsProvider;
    UNCSectionInfoStore *_sectionInfoStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)writeSectionInfo:(id)a0;
- (id)init;
- (void)dealloc;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)getEffectiveGlobalScheduledDeliverySettingWithHandler:(id /* block */)a0;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)a0 withHandler:(id /* block */)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)activate;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithHandler:(id /* block */)a0;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)getEffectiveGlobalAnnounceSettingWithHandler:(id /* block */)a0;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithHandler:(id /* block */)a0;
- (void)setEffectiveGlobalAnnounceSetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)a0 withHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (void)getEffectiveGlobalContentPreviewsSettingWithHandler:(id /* block */)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withHandler:(id /* block */)a2;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithHandler:(id /* block */)a0;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithHandler:(id /* block */)a0;
- (void)writeClearedSections:(id)a0;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithHandler:(id /* block */)a0;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)a0 withHandler:(id /* block */)a1;
- (void)addActiveSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)clearedSectionsByIDWithHandler:(id /* block */)a0;
- (void)allSectionInfosByIDWithHandler:(id /* block */)a0;
- (void)activeSectionIDsWithHandler:(id /* block */)a0;
- (void)allSectionIDsWithHandler:(id /* block */)a0;
- (void)allSortedActiveSections:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)allSortedSectionInfos:(BOOL)a0 withHandler:(id /* block */)a1;
- (void)clearedInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (void)enqueueSyncedRemovalForBulletin:(id)a0 universalSectionID:(id)a1 feeds:(unsigned long long)a2;
- (void)hasSectionInfoLegacyFileWithHandler:(id /* block */)a0;
- (void)pairedSyncDeviceCountWithHandler:(id /* block */)a0;
- (void)readSavedClearedSectionsWithHandler:(id /* block */)a0;
- (void)readSectionInfoLegacyFileWithHandler:(id /* block */)a0;
- (void)readSectionInfoWithHandler:(id /* block */)a0;
- (void)readSectionInfoWithVersionNumberForMigrationWithHandler:(id /* block */)a0;
- (void)readSectionOrderWithHandler:(id /* block */)a0;
- (void)removeSectionWithID:(id)a0 withHandler:(id /* block */)a1;
- (void)sectionInfoForSectionID:(id)a0 effective:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)sectionInfosForSectionIDs:(id)a0 effective:(BOOL)a1 withHandler:(id /* block */)a2;
- (void)setAllSectionInfoByID:(id)a0 withHandler:(id /* block */)a1;
- (void)setClearedInfo:(id)a0 forSectionID:(id)a1 withHandler:(id /* block */)a2;
- (void)setClearedSectionsByID:(id)a0 withHandler:(id /* block */)a1;
- (void)sortedSectionIDsWithHandler:(id /* block */)a0;
- (void)writeSectionOrder:(id)a0;
- (void)sendPendingSyncedRemovals;

@end
