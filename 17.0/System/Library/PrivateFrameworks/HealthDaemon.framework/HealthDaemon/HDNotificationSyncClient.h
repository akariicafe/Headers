@class NSString, HDProfile, NSMutableSet, NSDate, HDNotificationInstructionManager, NSObject;
@protocol OS_dispatch_queue, HDNotificationSyncClientDelegate;

@interface HDNotificationSyncClient : NSObject <HDDiagnosticObject, HDNotificationInstructionManagerObserver, HDProfileReadyObserver> {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_messageIdentifiersInFlight;
}

@property (readonly, nonatomic) HDNotificationInstructionManager *instructionManager;
@property (copy, nonatomic) NSDate *unitTest_currentDate;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (weak, nonatomic) id<HDNotificationSyncClientDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)profileDidBecomeReady:(id)a0;
- (id)diagnosticDescription;
- (void).cxx_destruct;
- (void)fakeReceivedNotificationInstruction:(id)a0 sendingDeviceInfo:(id)a1 criteria:(id)a2 completion:(id /* block */)a3;
- (id)initWithProfile:(id)a0 clientIdentifier:(id)a1 queue:(id)a2;
- (BOOL)markPendingNotificationInstructionsAsProcessed:(id)a0 error:(id *)a1;
- (id)notificationHoldInstructionsWithError:(id *)a0;
- (void)notificationInstructionManager:(id)a0 didInsertNotificationInstruction:(id)a1;
- (BOOL)obliterateNotificationInstructionsError:(id *)a0;
- (id)pendingNotificationDismissInstructionsWithError:(id *)a0;
- (id)pendingNotificationSendInstructionsWithError:(id *)a0;
- (BOOL)sendNewDeviceNotificationWithMessageKind:(long long)a0 error:(id *)a1;
- (BOOL)sendNotificationInstruction:(id)a0 criteria:(id)a1 error:(id *)a2;

@end
