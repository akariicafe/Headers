@class NSArray;

@interface BBBulletinBoardDefaults : BSAbstractDefaultDomain

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (nonatomic) long long globalNotificationListDisplayStyleSetting;
@property (nonatomic) long long globalSpokenNotificationSetting_deprecated;
@property (nonatomic, getter=isAnnounceSupportedForHeadphones) BOOL announceSupportedForHeadphones;
@property (nonatomic, getter=isAnnounceSupportedForCarPlay) BOOL announceSupportedForCarPlay;
@property (nonatomic, getter=hasPairedVehiclesForCarPlay) BOOL pairedVehiclesForCarPlay;

+ (id)standardDefaults;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
