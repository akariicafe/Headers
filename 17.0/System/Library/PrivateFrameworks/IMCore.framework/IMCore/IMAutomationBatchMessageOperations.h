@interface IMAutomationBatchMessageOperations : NSObject

- (id)beginRecordingMessagesToReplayDatabase:(id)a0 error:(id *)a1;
- (id)sendMessagesfromReplayDatabase:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (id)stopRecordingDatabaseError:(id *)a0;

@end
