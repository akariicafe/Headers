@interface Heart.CardioFitnessPromotionStatusProxy : NSObject <HKHRCardioFitnessFeatureStatusManagerObserver> {
    void /* unknown type, empty encoding */ featureStatusManager;
    void /* unknown type, empty encoding */ onboardingStatus;
    void /* unknown type, empty encoding */ notificationStatus;
    void /* unknown type, empty encoding */ promotionStatusDeterminer;
    void /* unknown type, empty encoding */ _promotionStatus;
    void /* unknown type, empty encoding */ queue;
}

- (void)featureStatusManager:(id)a0 didUpdateNotificationStatus:(id)a1;
- (void)featureStatusManager:(id)a0 didUpdateOnboardingStatus:(id)a1;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;

@end
