@class NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface WCQueueManager : NSObject

@property BOOL canSend;
@property BOOL messageOutstanding;
@property (retain) NSMutableArray *messageQueue;
@property (retain) NSObject<OS_dispatch_queue> *workQueue;
@property (retain) NSMutableDictionary *inFlightMessages;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (void)allowMessageSending;
- (void)cancelQueuedMessages;
- (void)handleSentMessageWithIdentifier:(id)a0 error:(id)a1;
- (void)onqueue_allowMessageSending;
- (void)onqueue_attemptToSend;
- (void)onqueue_cancelDaemonMessages;
- (void)onqueue_cancelQueuedMessages;
- (void)onqueue_clearQueuedMessages;
- (void)onqueue_dequeueMessage;
- (void)onqueue_enqueueMessage:(id)a0;
- (void)onqueue_handleAcceptanceWithCurrentAccepted:(BOOL)a0 nextAvailable:(BOOL)a1;
- (void)onqueue_handleFailedDaemonConnectionForQueuedMessage:(id)a0;
- (void)onqueue_handleSentMessageWithIdentifier:(id)a0 error:(id)a1;
- (id)onqueue_peekMessage;
- (void)onqueue_sendMessage:(id)a0 completionHandler:(id /* block */)a1;

@end
