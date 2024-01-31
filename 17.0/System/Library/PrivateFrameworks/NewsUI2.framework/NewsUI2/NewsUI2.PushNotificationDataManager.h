@interface NewsUI2.PushNotificationDataManager : NSObject <FCUserInfoObserving> {
    void /* unknown type, empty encoding */ pushNotificationService;
    void /* unknown type, empty encoding */ subscriptionController;
    void /* unknown type, empty encoding */ featureAvailability;
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ debounceTasks;
}

- (void)userInfoDidChangeSportsTopicNotificationsEnabledState:(id)a0 fromCloud:(BOOL)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
