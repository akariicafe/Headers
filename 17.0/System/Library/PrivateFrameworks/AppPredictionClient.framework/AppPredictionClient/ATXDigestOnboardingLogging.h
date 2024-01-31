@class ATXDigestOnboardingLoggingBiomeStream, ATXDigestOnboardingAppSelectionLoggingBiomeStream, NSObject;
@protocol OS_dispatch_queue;

@interface ATXDigestOnboardingLogging : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    ATXDigestOnboardingLoggingBiomeStream *_digestOnboardingLoggingBiomeStream;
    ATXDigestOnboardingAppSelectionLoggingBiomeStream *_digestOnboardingAppSelectionLoggingBiomeStream;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithDigestOnboardingLoggingBiomeStream:(id)a0 digestOnboardingAppSelectionLoggingBiomeStream:(id)a1;
- (void)logDigestOnboardingAppSelectionForShownApps:(id)a0 appsAddedToDigest:(id)a1 rankedApps:(id)a2 sessionUUID:(id)a3;
- (void)logDigestOnboardingWithEntrySource:(int)a0 digestSetupOutcome:(int)a1 finalUIShown:(int)a2 timeTaken:(double)a3 didSelectShowMore:(BOOL)a4 numDaysForAverageNotificationCount:(unsigned long long)a5 shownApps:(id)a6 appsAddedToDigest:(id)a7 deliveryTimes:(id)a8;
- (id)onBoardingAppSelectionEventWithApp:(id)a0 rank:(unsigned long long)a1 addedToDigest:(BOOL)a2 wasShownInDigest:(BOOL)a3 sessionUUID:(id)a4;

@end
