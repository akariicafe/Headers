@class NCNotificationRequest, NSMutableSet, NSString, SBCommunicationPolicyManager, SBNCSoundController, SBNCScreenController, SBLockScreenManager;

@interface SBNCAlertingController : NSObject <NCAlertingController>

@property (retain, nonatomic) SBNCSoundController *soundController;
@property (retain, nonatomic) SBNCScreenController *screenController;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager;
@property (retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts;
@property (retain, nonatomic) NSMutableSet *realertTimers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)a0;
- (void)_lockStateChanged;
- (BOOL)_activeAlertDestinationsInRequestDestinations:(id)a0;
- (void)_alertNowForNotificationRequest:(id)a0;
- (void)_realertTimerFired:(id)a0;
- (BOOL)_shouldRealert;
- (void)_notificationCenterDidPresent;
- (void)resetAutomaticLockStateForNotificationRequest:(id)a0;
- (BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)a0;
- (void).cxx_destruct;
- (BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)a0;
- (void)_alertNowForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (void)_killRealertsForNotificationRequest:(id)a0;
- (void)_scheduleRealertsForNotificationRequest:(id)a0;
- (void)alertOnPostForNotificationRequest:(id)a0 forRequestDestinations:(id)a1;
- (void)alertOnPresentationForNotificationRequest:(id)a0 presentingDestination:(id)a1;
- (id)initWithSoundController:(id)a0 screenController:(id)a1 lockScreenManager:(id)a2 communicationPolicyManager:(id)a3;
- (void)killAlertsForNotificationRequest:(id)a0;
- (void)killRealerts;
- (void)_hardwareButtonPressed:(id)a0;
- (BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)a0;

@end
