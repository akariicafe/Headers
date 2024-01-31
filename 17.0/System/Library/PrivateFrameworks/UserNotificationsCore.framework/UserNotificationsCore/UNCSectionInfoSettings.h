@class NSDictionary, UNCMuteAssertion, NSDate;

@interface UNCSectionInfoSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL showsInLockScreen;
@property (nonatomic) BOOL showsInNotificationCenter;
@property (nonatomic) BOOL showsMessagePreview;
@property (nonatomic) long long spokenNotificationSetting;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (nonatomic) long long authorizationStatus;
@property (retain, nonatomic) NSDate *authorizationExpirationDate;
@property (nonatomic) BOOL allowsNotifications;
@property (retain, nonatomic) NSDate *lastUserGrantedAuthorizationDate;
@property (readonly, nonatomic) BOOL isAuthorizedTemporarily;
@property (retain, nonatomic) UNCMuteAssertion *muteAssertion;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) long long contentPreviewSetting;
@property (nonatomic) unsigned long long alertType;
@property (nonatomic) unsigned long long pushSettings;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) long long timeSensitiveSetting;
@property (nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) BOOL userConfiguredTimeSensitiveSetting;
@property (nonatomic) long long scheduledDeliverySetting;
@property (nonatomic) long long directMessagesSetting;
@property (nonatomic, getter=hasUserConfiguredDirectMessagesSetting) BOOL userConfiguredDirectMessagesSetting;
@property (nonatomic) long long bulletinGroupingSetting;
@property (nonatomic) long long announceSetting;

- (void)muteThreadIdentifier:(id)a0 untilDate:(id)a1;
- (unsigned long long)hash;
- (void)muteSectionUntilDate:(id)a0;
- (id)_announceSettingDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDefaultsForSectionType:(long long)a0;
- (BOOL)isBulletinMutedForThreadIdentifier:(id)a0;
- (id)description;
- (id)_contentPreviewSettingDescription;
- (id)_alertTypeDescription;
- (id)_bulletinGroupingSettingDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)unmuteThreadIdentifier:(id)a0;
- (void)unmuteSection;
- (id)_authorizationStatusDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
