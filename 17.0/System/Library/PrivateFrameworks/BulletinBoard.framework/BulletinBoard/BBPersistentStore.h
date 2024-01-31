@class NSString;

@interface BBPersistentStore : NSObject <BBPersistentStoreInterface>

@property (readonly) NSString *dataDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)effectiveGlobalAnnounceSetting;
- (void)writeSectionInfo:(id)a0;
- (id)init;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)setGlobalAnnounceSetting:(long long)a0;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (void).cxx_destruct;
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
- (id)_clearedSectionsPath;
- (id)_sectionInfoLegacyPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)deleteSectionInfoFile;
- (void)deleteSectionInfoLegacyFile;
- (BOOL)hasSectionInfoLegacyFile;
- (id)initWithDataDirectoryPath:(id)a0;
- (id)readClearedSections;
- (id)readSectionInfoLegacy;
- (id)readSectionInfoWithVersionNumberForMigration;
- (id)readSectionOrder;
- (void)setGlobalContentPreviewsSetting:(long long)a0;
- (void)writeSectionOrder:(id)a0;

@end
