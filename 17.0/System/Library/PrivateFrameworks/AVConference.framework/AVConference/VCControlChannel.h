@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCControlChannel : VCObject {
    id _dataReceivedDelegate;
    int _bytesSent;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _bytesReceived;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
    NSMutableArray *_optionalTopics;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
}

@property (nonatomic) id messageReceivedDelegate;
@property (nonatomic) id dataReceivedDelegate;
@property (readonly, nonatomic) unsigned int reliableMessageResendInterval;

- (id)init;
- (void)dealloc;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 timeout:(unsigned int)a3 completion:(id /* block */)a4;
- (void)addOptionalTopic:(id)a0;
- (void)flushActiveMessages;
- (void)sendReliableMessage:(id)a0 withTopic:(id)a1;
- (void)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (BOOL)sendReliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2 timeout:(unsigned int)a3 withOptions:(id)a4 completion:(id /* block */)a5;
- (BOOL)sendReliableMessageAndWait:(id)a0 withTopic:(id)a1;
- (BOOL)sendReliableMessageAndWait:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (void)sendUnreliableMessage:(id)a0 withTopic:(id)a1 participantID:(unsigned long long)a2;
- (void)setEncryptionWithEncryptionMaterial:(struct { struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x0; unsigned int x1; struct tagSRTPExchangeInfo { char x0[65]; char x1[29]; void *x2; } x2; unsigned int x3; int x4; int x5; } *)a0;
- (void)throwNotSupportedExceptionForMethod:(id)a0;

@end
