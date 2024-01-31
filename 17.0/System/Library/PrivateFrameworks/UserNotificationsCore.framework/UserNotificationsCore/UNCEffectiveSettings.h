@class AFSiriAnnouncementRequestCapabilityManager, NSArray, NSString, UNCBiometricResource, UNCBulletinServerConnection, NSObject;
@protocol OS_dispatch_queue, UNCBulletinDefaultsInterface;

@interface UNCEffectiveSettings : NSObject <AFSiriAnnouncementRequestCapabilityObserving> {
    id<UNCBulletinDefaultsInterface> _bulletinDefaults;
    BOOL _announceOnBuiltInSpeakerEnabled;
    BOOL _announceOnHearingAidsEnabled;
    BOOL _announceOnHearingAidsSupported;
    BOOL _siriEnabled;
    BOOL _siriAllowedWhenLocked;
    AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForHeadphones;
    AFSiriAnnouncementRequestCapabilityManager *_announcementCapabilityManagerForCarPlay;
    UNCBiometricResource *_biometricResource;
    UNCBulletinServerConnection *_bbServerConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (nonatomic, setter=setGlobalAnnounceSetting:) long long effectiveGlobalAnnounceSetting;
@property (nonatomic, setter=setGlobalAnnounceHeadphoneSetting:) long long effectiveGlobalAnnounceHeadphoneSetting;
@property (nonatomic, setter=setGlobalAnnounceCarPlaySetting:) long long effectiveGlobalAnnounceCarPlaySetting;
@property (nonatomic, setter=setGlobalScheduledDeliverySetting:) long long effectiveGlobalScheduledDeliverySetting;
@property (retain, nonatomic, setter=setGlobalScheduledDeliveryTimes:) NSArray *effectiveGlobalScheduledDeliveryTimes;
@property (nonatomic, setter=setGlobalScheduledDeliveryShowNextSummarySetting:) long long effectiveGlobalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic, setter=setGlobalContentPreviewSetting:) long long effectiveGlobalContentPreviewSetting;
@property (nonatomic, setter=setGlobalNotificationListDisplayStyleSetting:) long long effectiveGlobalNotificationListDisplayStyleSetting;
@property (readonly, nonatomic) BOOL hasPairedVehiclesForCarPlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_saveGlobalAnnounceSettingEnabledEvent;
- (id)init;
- (void)_queue_setGlobalAnnounceCarPlaySetting:(long long)a0;
- (void)_queue_setGlobalAnnounceHeadphonesSetting:(long long)a0;
- (long long)_queue_globalScheduledDeliverySetting;
- (long long)_queue_globalAnnounceCarPlaySetting;
- (long long)_queue_globalAnnounceSetting;
- (id)_queue_globalScheduledDeliveryTimes;
- (void)_pairedVehiclesForCarPlayDidChange:(id)a0;
- (void)_siriPreferencesDidChange:(id)a0;
- (void)eligibleAnnouncementRequestTypesChanged:(unsigned long long)a0 onPlatform:(long long)a1;
- (void)_queue_setGlobalScheduledDeliveryTimes:(id)a0;
- (void)_queue_setGlobalAnnounceSetting:(long long)a0;
- (long long)_queue_globalNotificationListDisplayStyleSetting;
- (void).cxx_destruct;
- (id)_encodedScheduledDeliveryTimesForDeliveryTimes:(id)a0;
- (void)_publishBiomeSignalEventForGlobalNotificationListDisplayStyleSettingChangeToSetting:(long long)a0;
- (long long)_queue_globalAnnounceHeadphonesSetting;
- (void)_fetchAllVehiclesForCarPlay;
- (void)availableAnnouncementRequestTypesChanged:(unsigned long long)a0 onPlatform:(long long)a1;
- (BOOL)_supportsFaceID;
- (void)_biometricResourceStateChanged;
- (id)_scheduledDeliveryTimesForEncodedDeliveryTimes:(id)a0;
- (BOOL)_isFaceIDEnrolled;
- (long long)_queue_defaultGlobalContentPreviewSetting;
- (long long)_queue_effectiveGlobalAnnounceCarPlaySetting;
- (long long)_queue_effectiveGlobalAnnounceHeadphoneSetting;
- (long long)_queue_effectiveGlobalAnnounceSetting;
- (long long)_queue_effectiveGlobalScheduledDeliveryShowNextSummarySetting;
- (long long)_queue_globalContentPreviewsSetting;
- (BOOL)_queue_hasPairedVehiclesForCarPlay;
- (BOOL)_queue_isAnnounceSupportedForCarPlay;
- (BOOL)_queue_isAnnounceSupportedForHeadphones;
- (void)_queue_loadCarPlayCapabilities;
- (void)_queue_loadSiriCapabilities;
- (void)_queue_setAnnounceSupportedForCarPlay:(BOOL)a0;
- (void)_queue_setAnnounceSupportedForHeadphones:(BOOL)a0;
- (void)_queue_setGlobalContentPreviewsSetting:(long long)a0;
- (void)_queue_setPairedVehiclesForCarPlay:(BOOL)a0;
- (void)_queue_updateAllSectionInfos;
- (void)_queue_updateAnnounceControlCenterModuleAvailability;
- (void)_queue_updateAnnounceSettings;
- (void)_queue_updateGlobalSettings;
- (void)_queue_updateSiriPreferences;
- (id)initWithBulletinDefaults:(id)a0;
- (id)initWithBulletinDefaults:(id)a0 biometricResource:(id)a1;

@end
