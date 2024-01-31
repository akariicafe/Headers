@class HDAnalyticsDailyEventManager, HDHealthAppEmergencySOSManager, NSString, HDHAHealthAppApplicationInstallationManager, HDNotificationSyncClient, HDHealthAppDataObserver, HDHealthAppLabConceptObserver, HDProfile, HDHealthAppSharingEntryObserver;

@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileReadyObserver, LSApplicationWorkspaceObserverProtocol, HDProfileExtension, HDNotificationSyncClientDelegate>

@property (retain, nonatomic) HDHealthAppDataObserver *dataObserver;
@property (retain, nonatomic) HDHealthAppLabConceptObserver *labConceptObserver;
@property (retain, nonatomic) HDHealthAppSharingEntryObserver *sharingEntryObserver;
@property (retain, nonatomic) HDHAHealthAppApplicationInstallationManager *appInstallationManager;
@property (retain, nonatomic) HDAnalyticsDailyEventManager *dailyAnalyticsManager;
@property (retain, nonatomic) HDHealthAppEmergencySOSManager *emergencySOSManager;
@property (retain, nonatomic) HDNotificationSyncClient *healthAppNewDeviceNotificationSyncClient;
@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDNotificationSyncClient *healthSharingNotificationSyncClient;
@property (copy, nonatomic) id /* block */ unitTest_didProcessNotificationInstruction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (void)daemonReady:(id)a0;
- (void)applicationsDidUninstall:(id)a0;
- (void)dealloc;
- (id)initWithProfile:(id)a0;
- (void)notificationSyncClient:(id)a0 didReceiveInstructionWithAction:(long long)a1;
- (void)_handleSendInstruction;
- (void).cxx_destruct;
- (void)_handleHoldInstruction;
- (void)_healthAppWasUninstalled:(id)a0;
- (void)_handleDismissInstruction;

@end
