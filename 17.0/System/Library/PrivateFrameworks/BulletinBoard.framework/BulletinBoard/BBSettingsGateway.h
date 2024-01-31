@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface BBSettingsGateway : NSObject <BBSettingsGatewayClientInterface> {
    NSXPCConnection *_connectionQueue_bbServerConnection;
    NSXPCConnection *_connectionQueue_unServerConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)clientInterface;
+ (void)initialize;
+ (id)serverInterface;

- (long long)effectiveGlobalAnnounceSetting;
- (id)allSectionInfo;
- (void)refreshSectionInfo;
- (id)initWithQueue:(id)a0;
- (void)setEffectiveGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)getEffectiveGlobalScheduledDeliverySettingWithCompletion:(id /* block */)a0;
- (id)allEffectiveSectionInfo;
- (id)init;
- (void)setEffectiveGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (void)dealloc;
- (void)_resetSettingsPersistenceConnection;
- (void)getEffectiveGlobalAnnounceHeadphonesSettingWithCompletion:(id /* block */)a0;
- (id)sectionInfoForSectionIDs:(id)a0;
- (void)getEffectiveGlobalAnnounceCarPlaySettingWithCompletion:(id /* block */)a0;
- (void)getEffectiveGlobalNotificationListDisplayStyleSettingWithCompletion:(id /* block */)a0;
- (void)_resetBBServerSettingsConnection;
- (void)getEffectiveSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)getSectionInfoWithCompletion:(id /* block */)a0;
- (id)sectionInfoForSectionID:(id)a0;
- (void)getEffectiveGlobalContentPreviewsSettingWithCompletion:(id /* block */)a0;
- (void)getSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (void)invalidate;
- (long long)effectiveGlobalContentPreviewsSetting;
- (void)refreshGlobalSettings;
- (void)setEffectiveGlobalSpokenNotificationSetting:(long long)a0;
- (void)setEffectiveGlobalAnnounceSetting:(long long)a0;
- (void)getEffectiveGlobalScheduledDeliveryTimesWithCompletion:(id /* block */)a0;
- (void)getSectionInfoForActiveSectionsWithCompletion:(id /* block */)a0;
- (id)_ensureBBServerSettingsConnection;
- (id)allSectionIDs;
- (void)getEffectiveGlobalAnnounceSettingWithCompletion:(id /* block */)a0;
- (void)refreshAnnounceSettings;
- (void)getEffectiveGlobalScheduledDeliveryShowNextSummarySettingWithCompletion:(id /* block */)a0;
- (long long)effectiveGlobalNotificationListDisplayStyleSetting;
- (id)effectiveGlobalScheduledDeliveryTimes;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void)getEffectiveGlobalSpokenNotificationSettingWithCompletion:(id /* block */)a0;
- (void)updateSectionInfoForSectionID:(id)a0 withHandler:(id /* block */)a1;
- (void)setEffectiveGlobalScheduledDeliverySetting:(long long)a0;
- (void).cxx_destruct;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (void)setEffectiveGlobalContentPreviewsSetting:(long long)a0;
- (id)_ensureSettingsPersistenceConnection;
- (id)_settingsConnection;
- (void)setEffectiveGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (id)allActiveSectionIDs;
- (void)setEffectiveGlobalScheduledDeliveryTimes:(id)a0;
- (long long)effectiveGlobalAnnounceHeadphonesSetting;
- (void)getEffectiveSectionInfoForSectionID:(id)a0 withCompletion:(id /* block */)a1;
- (long long)effectiveGlobalScheduledDeliverySetting;
- (void)setEffectiveGlobalAnnounceHeadphonesSetting:(long long)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (long long)effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (long long)effectiveGlobalAnnounceCarPlaySetting;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1 withCompletion:(id /* block */)a2;
- (id)activeSectionInfo;
- (long long)effectiveGlobalSpokenNotificationSetting;

@end
