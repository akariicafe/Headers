@class NSUUID, NSString, CATTransport, NSHashTable, NSObject, NSDictionary, NSMutableSet, CATStateMachine, NSMutableArray, NSMapTable;
@protocol CATTaskClientDelegate, OS_dispatch_group;

@interface CATTaskClient : NSObject <CATTransportDelegate> {
    CATStateMachine *mFSM;
    NSMutableSet *mActiveRemoteTaskOperations;
    NSMapTable *mRemoteTaskByUUID;
    NSMutableArray *mEnqueuedMessages;
    NSMutableArray *mEnqueuedTaskUUIDs;
    NSHashTable *mOrphanedTransports;
    CATTaskClient *mStrongSelf;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
}

@property (retain, nonatomic) NSUUID *sessionUUID;
@property (copy, nonatomic) NSDictionary *serverUserInfo;
@property (readonly, nonatomic) CATTransport *transport;
@property (weak, nonatomic) id<CATTaskClientDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)connectWithTransportFromTaskClient:(id)a0;
- (void)disconnect;
- (id)init;
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)processSessionMessage:(id)a0;
- (void)didPrepareTaskOperation:(id)a0;
- (void)dealloc;
- (void)delegateDidInterruptWithError:(id)a0;
- (void)activeOperationDidFinish:(id)a0;
- (void)taskOperationDidFailWithInvalidTaskClient:(id)a0;
- (void)sendMessageThroughTransport:(id)a0;
- (void)delegateDidDisconnect;
- (void)transport:(id)a0 didFailToSendMessage:(id)a1 error:(id)a2;
- (void)trackTaskOperation:(id)a0;
- (void)transportDidResume:(id)a0;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)delegatedidReceiveNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)abandonTransport;
- (void)invalidate;
- (void)transport:(id)a0 didSendMessage:(id)a1;
- (void)transportDidInvalidate:(id)a0;
- (void)sessionDidInvalidate;
- (void)processNotificationMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (void)resumeSession;
- (void)enqueueTaskOperation:(id)a0;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)a0;
- (void)delegateDidConnect;
- (void).cxx_destruct;
- (void)transport:(id)a0 didReceiveMessage:(id)a1;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)sessionResumedWithTaskUUIDs:(id)a0;
- (id)prepareTaskOperationForRequest:(id)a0;
- (void)delegateDidInvalidateAndFinalize;
- (void)enqueueMessage:(id)a0;
- (id)captureTransport;
- (void)delegateWillInvalidate;
- (void)resumeCapturedTransportFromTaskClient:(id)a0;
- (void)remoteTaskOperation:(id)a0 preparedMessage:(id)a1;
- (void)resumeWithTaskUUIDs:(id)a0;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)processTaskMessage:(id)a0;
- (void)connectWithTransport:(id)a0;
- (void)resumeTransport:(id)a0;
- (void)delegateDidInvalidate;

@end
