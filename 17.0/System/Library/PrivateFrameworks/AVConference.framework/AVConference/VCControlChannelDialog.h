@class NSObject, NSMutableDictionary, NSString, NSNumber, NSMutableArray;
@protocol OS_dispatch_queue, VCControlChannelTransactionDelegate;

@interface VCControlChannelDialog : VCObject {
    BOOL _handshakeEnabled;
    BOOL _isHandshakeMode;
    BOOL _isHandshakeCommenced;
    unsigned int _sessionID;
    id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
    BOOL _shouldFinishHandshake;
    double _handshakeStartTime;
    NSNumber *_participantID;
    NSString *_participantUUID;
    NSMutableArray *_cachedMessages;
    NSObject<OS_dispatch_queue> *_handshakeOperationQueue;
}

@property (readonly) NSMutableDictionary *transactions;

- (void)dealloc;
- (void)cacheOutgoingMessage:(id)a0 topic:(id)a1 timeout:(id)a2 withOptions:(id)a3;
- (void)checkForSignificantHandshakeDelayWithDelegate:(id)a0;
- (void)confirmTransaction:(id)a0;
- (void)doHandshakeWithMessage:(id)a0 topic:(id)a1 afterDelay:(double)a2 withOptions:(id)a3;
- (void)flushActiveTransactions;
- (id)initWithSessionID:(unsigned int)a0 participantID:(id)a1 participantUUID:(id)a2 participantConfig:(struct { int x0; struct tagVCSecurityKeyHolder *x1; struct tagVCSecurityKeyHolder *x2; struct __CFData *x3; struct __CFData *x4; BOOL x5; } *)a3 transactionDelegate:(id)a4;
- (id)newDataFromMessage:(id)a0 topic:(id)a1 transactionID:(unsigned long long)a2 isReliable:(BOOL)a3 transactionDelegate:(id)a4;
- (id)processMessageData:(id)a0 participantID:(id)a1 topic:(id *)a2 transactionID:(id *)a3 messageStatus:(unsigned int *)a4 isInternalMessage:(BOOL *)a5;
- (void)removeTransactionForTransactionID:(int)a0;
- (void)resetHandshake;
- (void)sendAllCachedMessagesAndDisableHandshakeWhenDone;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 timeout:(id)a2 withOptions:(id)a3;
- (BOOL)sendReliableMessageInternal:(id)a0 withTopic:(id)a1 timeout:(id)a2 useFastRetries:(BOOL)a3 withOptions:(id)a4;
- (BOOL)sendUnreliableMessage:(id)a0 withTopic:(id)a1 sessionID:(unsigned int)a2 participantID:(id)a3 transactionDelegate:(id)a4;
- (void)startHandshakeWithMessage:(id)a0 topic:(id)a1 withOptions:(id)a2;

@end
