@class BBSettingsGateway, NSString, NSObject, NSMutableArray, BBObserver;
@protocol OS_dispatch_queue;

@interface UNSSettingsGateway : NSObject <BBObserverDelegate> {
    NSMutableArray *_observers;
    BBSettingsGateway *_settingsGateway;
    BBObserver *_settingsObserver;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)allSectionInfo;
- (id)allEffectiveSectionInfo;
- (id)init;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (long long)_queue_globalScheduledDeliverySetting;
- (id)_queue_effectiveSectionInfoForSectionID:(id)a0;
- (long long)globalNotificationListDisplayStyleSetting;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (id)sectionInfoForSectionIDs:(id)a0;
- (long long)_queue_globalAnnounceSetting;
- (void)_queue_removeObserver:(id)a0;
- (void)setSectionInfo:(id)a0 forSectionID:(id)a1;
- (id)_queue_globalScheduledDeliveryTimes;
- (id)_queue_effectiveSectionInfosForSectionIDs:(id)a0;
- (void)setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (long long)globalAnnounceHeadphonesSetting;
- (id)sectionInfoForSectionID:(id)a0;
- (long long)globalScheduledDeliverySetting;
- (void)_queue_getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (long long)globalAnnounceCarPlaySetting;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)a0;
- (void)setGlobalAnnounceSetting:(long long)a0;
- (void)_queue_setGlobalAnnounceSetting:(long long)a0;
- (void)_queue_setGlobalScheduledDeliverySetting:(long long)a0;
- (void)observer:(id)a0 updateGlobalSettings:(id)a1;
- (void)_queue_setSectionInfo:(id)a0 forSectionID:(id)a1;
- (void)_queue_addObserver:(id)a0;
- (long long)globalScheduledDeliveryShowNextSummarySetting;
- (void)setGlobalContentPreviewSetting:(long long)a0;
- (long long)_queue_globalScheduledDeliveryShowNextSummarySetting;
- (long long)_queue_globalContentPreviewSetting;
- (id)_queue_sectionInfosForSectionIDs:(id)a0;
- (long long)_queue_globalNotificationListDisplayStyleSetting;
- (id)effectiveSectionInfoForSectionID:(id)a0;
- (void).cxx_destruct;
- (void)observer:(id)a0 updateSectionInfo:(id)a1;
- (id)effectiveSectionInfoForSectionIDs:(id)a0;
- (long long)globalContentPreviewSetting;
- (id)_queue_allSectionInfos;
- (void)setGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (id)_queue_sectionInfoForSectionID:(id)a0;
- (void)_queue_setGlobalNotificationListDisplayStyleSetting:(long long)a0;
- (void)setGlobalScheduledDeliverySetting:(long long)a0;
- (void)getSectionInfoForSectionIDs:(id)a0 withCompletion:(id /* block */)a1;
- (void)_queue_setGlobalContentPreviewSetting:(long long)a0;
- (void)addObserver:(id)a0;
- (long long)globalAnnounceSetting;
- (void)_queue_setGlobalScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (id)globalScheduledDeliveryTimes;
- (void)setGlobalScheduledDeliveryTimes:(id)a0;
- (void)setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (id)_queue_allEffectiveSectionInfos;

@end
