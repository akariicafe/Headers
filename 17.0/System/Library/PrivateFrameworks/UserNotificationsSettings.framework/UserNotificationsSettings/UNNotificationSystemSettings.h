@class NSArray;

@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long modifiedSettings;
@property (readonly, nonatomic) long long showPreviewsSetting;
@property (readonly, nonatomic) long long announcementSetting;
@property (readonly, nonatomic) long long announcementHeadphonesSetting;
@property (readonly, nonatomic) long long announcementCarPlaySetting;
@property (readonly, nonatomic) long long scheduledDeliverySetting;
@property (readonly, copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (readonly, nonatomic) long long scheduledDeliveryShowNextSummarySetting;
@property (readonly, nonatomic) long long notificationListDisplayStyleSetting;
@property (readonly, nonatomic) long long spokenNotificationSetting;

- (id)_stringForNotificationListDisplayStyleSetting:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7;
- (id)description;
- (id)_stringforAnnouncementCarPlaySetting:(long long)a0;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1 announcementHeadphonesSetting:(long long)a2 announcementCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6 notificationListDisplayStyleSetting:(long long)a7 modifiedSettings:(unsigned long long)a8;
- (void).cxx_destruct;
- (id)_stringForScheduledDeliveryTimes:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
