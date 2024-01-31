@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BBXPCPersistentStore : NSObject <BBPersistentStoreInterface> {
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSXPCConnection *_settingsPersistenceConnection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)effectiveGlobalAnnounceSetting;
- (void)writeSectionInfo:(id)a0;
- (id)init;
- (void)_resetSettingsPersistenceConnection;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)setGlobalAnnounceSetting:(long long)a0;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (void).cxx_destruct;
- (id)_ensureSettingsPersistenceConnection;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (void)writeClearedSections:(id)a0;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (void)setGlobalScheduledDeliverySetting:(long long)a0;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (void)setGlobalScheduledDeliveryTimes:(id)a0;
- (void)setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (id)readSectionInfo;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (BOOL)hasSectionInfoLegacyFile;
- (id)readClearedSections;
- (id)readSectionInfoLegacy;
- (id)readSectionInfoWithVersionNumberForMigration;
- (id)readSectionOrder;
- (void)setGlobalContentPreviewsSetting:(long long)a0;
- (void)writeSectionOrder:(id)a0;

@end
