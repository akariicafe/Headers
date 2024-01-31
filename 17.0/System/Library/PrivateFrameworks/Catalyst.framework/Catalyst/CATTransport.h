@class CATOperationQueue, NSString, CATStateMachine;
@protocol CATTransportDelegate;

@interface CATTransport : NSObject {
    CATStateMachine *mFSM;
    CATOperationQueue *mControlQueue;
    CATOperationQueue *mMessageQueue;
    CATTransport *mStrongSelf;
}

@property (copy, nonatomic) NSString *name;
@property (weak, nonatomic) id<CATTransportDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)suspend;
- (void)suspendQueue;
- (void)didInvalidate;
- (void)resumeQueue;
- (void)enqueueDelegateDidConnect;
- (void)invalidate;
- (void)didInterruptWithError:(id)a0;
- (void)delegateDidResume;
- (void)enqueueDelegateCouldNotConnectWithError:(id)a0;
- (void)resumeQueueAndConnection;
- (void)enqueueDelegateDidInterruptWithError:(id)a0;
- (void)sendMessage:(id)a0;
- (id)description;
- (void)resume;
- (void)didReceiveMessage:(id)a0;
- (void)suspendConnection;
- (void).cxx_destruct;
- (void)enqueueDelegateDidReceiveMessage:(id)a0;
- (id)debugDescription;
- (void)enqueueSendForMessage:(id)a0;
- (void)cancelHelloMessageAndResumeQueueOperations;
- (void)cancelAndResumeQueuesAndEnqueueInvalidateConnection;
- (void)resumeConnection;
- (void)invalidSendForMessage:(id)a0;
- (void)sendHelloMessageAndResumeQueue;
- (void)suspendQueueAndConnection;
- (void)invalidateConnection;
- (void)enqueueDelegateDidInvalidateAndFinalize;
- (id)operationToSendMessage:(id)a0;
- (void)delegateDidInvalidate;

@end
