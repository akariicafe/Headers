@class NSObject;
@protocol OS_dispatch_queue;

@interface CATConcreteIDSServiceConnectionDataChunker : NSObject <CATIDSServiceConnectionDataChunker> {
    NSObject<OS_dispatch_queue> *mWorkQueue;
    long long mMaxDataLength;
    unsigned long long mNextDataNumber;
    unsigned long long mNextSequenceNumber;
}

- (void).cxx_destruct;
- (id)chunkDataIntoMessageContent:(id)a0;
- (id)initWithWorkQueue:(id)a0 maxDataLength:(long long)a1;

@end
