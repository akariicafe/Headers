@class NSNumber;
@protocol VCControlChannelTransactionDelegate;

@interface VCControlChannelTransaction : VCObject {
    unsigned int _sessionID;
    NSNumber *_participantID;
    unsigned long long _transactionID;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _transactionLock;
    struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } _transactionDone;
    BOOL _isConfirmed;
    BOOL _isFlushed;
    id<VCControlChannelTransactionDelegate> _weakTransactionDelegate;
}

+ (BOOL)sendUnreliableMessage:(id)a0 sessionID:(unsigned int)a1 participantID:(id)a2 transactionID:(id)a3 transactionDelegate:(id)a4 withOptions:(id)a5;

- (void)dealloc;
- (void)confirmedTransactionByParticipantID:(id)a0 sessionID:(unsigned int)a1;
- (void)flushTransaction;
- (id)initWithTransportSessionID:(unsigned int)a0 participantID:(id)a1 transactionID:(unsigned long long)a2 transactionDelegate:(id)a3;
- (unsigned int)retryCountUsingFastRetries:(BOOL)a0;
- (float)retryTimeoutForRetryAttempt:(unsigned int)a0 usingFastRetries:(BOOL)a1;
- (BOOL)sendReliableMessage:(id)a0 sessionID:(unsigned int)a1 participantID:(id)a2 timeout:(id)a3 useFastRetries:(BOOL)a4 withOptions:(id)a5;

@end
