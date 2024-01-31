@class NSString, HDPrimaryProfile, HDNotificationSyncClient;

@interface HDSummariesHealthDaemonPluginProfileExtension : NSObject <HDProfileExtension, HDHealthDaemonReadyObserver, HDNotificationSyncClientDelegate>

@property (readonly, weak, nonatomic) HDPrimaryProfile *profile;
@property (retain, nonatomic) HDNotificationSyncClient *notificationSyncClient;
@property (copy, nonatomic) id /* block */ unitTest_didProcessNotificationInstruction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)notificationSyncClient:(id)a0 didReceiveInstructionWithAction:(long long)a1;
- (void).cxx_destruct;
- (void)_handleDismissInstructionWithClient:(id)a0;

@end
