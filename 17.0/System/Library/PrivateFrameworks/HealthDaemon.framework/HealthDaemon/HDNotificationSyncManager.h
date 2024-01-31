@class HDNotificationInstructionManager, NSString, HDProfile;

@interface HDNotificationSyncManager : NSObject <HDHealthDaemonReadyObserver, HDNotificationInstructionSyncServiceObserver> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationInstructionManager *notificationInstructionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)notificationInstructionSyncService:(id)a0 didReceiveNotificationInstruction:(id)a1;
- (BOOL)sendNotificationInstructionMessage:(id)a0 error:(id *)a1;

@end
