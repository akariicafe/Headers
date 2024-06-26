@class NSMutableDictionary, NSMapTable, NSDictionary, CATOperationQueue, CATStateMachine, NSObject, NSMutableArray, NSString, NSHashTable, NSMutableSet, CATTransport, NSUUID;
@protocol OS_dispatch_group, CATTaskSessionDelegate;

@interface CATTaskSession : NSObject <CATTransportDelegate, CATTaskOperationNotificationDelegate> {
    CATStateMachine *mFSM;
    NSMutableSet *mOperations;
    NSMutableDictionary *mOperationByRemoteUUID;
    NSMutableArray *mEnqueuedMessages;
    CATTaskSession *mStrongSelf;
    NSHashTable *mOrphanedTransports;
    CATOperationQueue *mOrphanedOperationQueue;
    NSDictionary *mPreviousSessionInfo;
    NSMapTable *mRemoteUUIDsByFinishedOperationProgressUpdates;
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;
    BOOL mIsStarting;
    CATOperationQueue *mDelegationQueue;
}

@property (copy, nonatomic) NSDictionary *clientUserInfo;
@property (retain, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) CATTransport *transport;
@property (weak, nonatomic) id<CATTaskSessionDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidateWithError:(id)a0;
- (void)operationDidFinish:(id)a0 remoteUUID:(id)a1;
- (void)disconnect;
- (void)delegatedidReceiveNotificationWithName:(id)a0;
- (id)init;
- (void)processSessionMessage:(id)a0;
- (void)processStartMessage:(id)a0;
- (void)dealloc;
- (void)delegateDidInterruptWithError:(id)a0;
- (void)sendMessageThroughTransport:(id)a0;
- (void)operationDidIncrementProgress:(id)a0 remoteUUID:(id)a1;
- (void)delegateDidDisconnect;
- (void)transport:(id)a0 didFailToSendMessage:(id)a1 error:(id)a2;
- (void)discardPreviousSessionInfo;
- (void)acceptConnection;
- (void)postNotificationWithName:(id)a0 userInfo:(id)a1;
- (void)abandonTransport;
- (void)invalidate;
- (void)savePreviousSessionInfo;
- (void)connectWithTransportFromTaskSession:(id)a0;
- (void)transport:(id)a0 didSendMessage:(id)a1;
- (void)transportDidInvalidate:(id)a0;
- (void)sessionDidInvalidate;
- (void)resumeCapturedTransportFromTaskSession:(id)a0;
- (void)processNotificationMessage:(id)a0;
- (void)processFetchProgressMessage:(id)a0;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)didCompleteSendForMessage:(id)a0;
- (void)sendMessage:(id)a0;
- (BOOL)delegateShouldAcceptConnection;
- (void)processCancelMessage:(id)a0;
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)a0;
- (void)delegateDidConnect;
- (void).cxx_destruct;
- (void)transport:(id)a0 didReceiveMessage:(id)a1;
- (void)transport:(id)a0 didInterruptWithError:(id)a1;
- (void)evaluateConnectionWithResumeMessage:(id)a0;
- (void)delegateEnqueueOperation:(id)a0;
- (void)taskOperation:(id)a0 didPostNotificationWithName:(id)a1 userInfo:(id)a2;
- (void)delegateDidInvalidateAndFinalize;
- (void)rejectConnection;
- (void)enqueueMessage:(id)a0;
- (id)captureTransport;
- (void)delegateWillInvalidate;
- (void)sendResumedMessage;
- (void)enqueueOperation:(id)a0;
- (id)delegatePrepareOperationWithRequest:(id)a0 error:(id *)a1;
- (void)localOperationDidFinish:(id)a0;
- (void)restorePreviousSessionInfo;
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)a0;
- (void)processTaskMessage:(id)a0;
- (void)clientDidResumeWithMessage:(id)a0;
- (void)connectWithTransport:(id)a0;
- (void)resumeTransport:(id)a0;
- (void)delegateDidInvalidate;

@end
