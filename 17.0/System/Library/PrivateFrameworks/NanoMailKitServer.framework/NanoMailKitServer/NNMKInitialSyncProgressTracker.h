@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue, NNMKInitialSyncProgressTrackerDelegate, NNMKSyncStateManager;

@interface NNMKInitialSyncProgressTracker : NSObject

@property (nonatomic) BOOL trackingInitialSync;
@property (nonatomic) BOOL trackingInitialSyncContent;
@property (nonatomic) double initialSyncProgress;
@property (nonatomic) unsigned long long initialSyncMessagesCount;
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsToSyncContent;
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsOfContentToAck;
@property (nonatomic) BOOL isWaitingForAccounts;
@property (nonatomic) BOOL isWaitingForMessageHeaders;
@property (nonatomic) BOOL isWaitingForMessageContent;
@property (nonatomic) BOOL timeoutCanceledForAccounts;
@property (nonatomic) BOOL timeoutCanceledForMessageHeaders;
@property (nonatomic) BOOL timeoutCanceledForMessageContent;
@property (weak, nonatomic) id<NNMKInitialSyncProgressTrackerDelegate> delegate;
@property (retain, nonatomic) id<NNMKSyncStateManager> syncStateManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue;
@property (readonly, nonatomic) BOOL isTrackingInitialSync;

+ (double)syncTimeout;

- (void)incrementProgressBy:(double)a0;
- (void)startSyncTimeoutForMessageContent;
- (void)updateProgressWithMessageContentDownloadFailed:(id)a0;
- (void)initialSyncTimedOut;
- (void)resetFlags;
- (void)updateProgressWithAccountsArrivedInPairedDevice;
- (void)finishedSendingInitialSyncContentToPairedDevice;
- (void)cancelTimeout;
- (void)startSyncTimeoutForAccounts;
- (void)startSyncTimeoutForMessageHeaders;
- (void)updateProgressWithMessageHeadersSent:(id)a0;
- (void).cxx_destruct;
- (void)syncFailedWithError:(id)a0;
- (void)updateProgressWithContentCompletelySyncedForMessageId:(id)a0;
- (void)updateProgressWithMessageContentArrivedInPairedDevice:(id)a0;
- (void)syncCompleted;
- (void)updateProgressWithAccountsSent;
- (void)startTrackingInitialSync;
- (void)updateProgressWithMessageHeadersArrivedInPairedDevice;
- (void)_handleInitialSyncCompleted;

@end
