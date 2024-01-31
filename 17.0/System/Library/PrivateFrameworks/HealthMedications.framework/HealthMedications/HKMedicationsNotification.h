@class NSString, NSDictionary;

@interface HKMedicationsNotification : NSObject

@property (readonly, nonatomic) NSString *category;
@property (readonly, nonatomic) NSString *argument;
@property (readonly, nonatomic) NSDictionary *userInfo;
@property (readonly, nonatomic) NSString *scheduleItemIdentifier;

+ (id)allNotificationCategories;
+ (id)notificationBeforeFirstUnlockWithScheduleItemIdentifier:(id)a0;
+ (id)notificationCategoryForString:(id)a0;
+ (id)notificationMissedWithScheduleItemIdentifier:(id)a0;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)a0;
+ (id)notificationNotMissedWithScheduleItemIdentifier:(id)a0 isCritical:(BOOL)a1 isFollowUp:(BOOL)a2;

- (id)init;
- (void).cxx_destruct;

@end
