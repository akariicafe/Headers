@class NSString, HDProfile, HDNotificationSyncClient;

@interface HDMCNotificationSyncManager : NSObject <HDNotificationSyncClientDelegate> {
    HDProfile *_profile;
}

@property (readonly, nonatomic) HDNotificationSyncClient *notificationSyncClient;
@property (copy, nonatomic) id /* block */ unitTest_didProcessNotificationInstruction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void)notificationSyncClient:(id)a0 didReceiveInstructionWithAction:(long long)a1;
- (void).cxx_destruct;
- (void)_handleDismissInstructionWithClient:(id)a0;
- (id)holdInstructionCategoryIdentifiersWithError:(id *)a0;
- (void)sendNotificationInstructionsForSchedulingChanges:(id)a0 sampleInfo:(id)a1;

@end
