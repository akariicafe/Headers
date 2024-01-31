@class BSCFBundle, UNSNotificationCategoryRepository;

@interface UNSNotificationRecordMapper : NSObject {
    BSCFBundle *_bundle;
    UNSNotificationCategoryRepository *_categoryRepository;
}

- (id)notificationForNotificationRecord:(id)a0;
- (id)_notificationCommunicationContextForNotificationRecord:(id)a0;
- (id)_notificationContentForNotificationRecord:(id)a0;
- (void).cxx_destruct;
- (id)_notificationIconForNotificationRecord:(id)a0;
- (id)notificationRequestForNotificationRecord:(id)a0;
- (unsigned long long)_notificationInterruptionLevelForNotificationRecord:(id)a0;
- (id)_notificationTriggerForNotificationRecord:(id)a0;
- (id)initWithBundle:(id)a0 categoryRepository:(id)a1;
- (id)_notificationSoundForNotificationRecord:(id)a0;

@end
