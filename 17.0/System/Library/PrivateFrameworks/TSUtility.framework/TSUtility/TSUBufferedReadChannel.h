@class NSString, NSError, NSObject;
@protocol TSUStreamReadChannel, OS_dispatch_data, TSUReadChannel, OS_dispatch_queue, OS_dispatch_semaphore;

@interface TSUBufferedReadChannel : NSObject <TSUReadChannel> {
    NSObject<OS_dispatch_semaphore> *_readSemaphore;
    id<TSUReadChannel> _sourceReadChannel;
    unsigned long long _sourceReadBufferSize;
    NSObject<OS_dispatch_queue> *_sourceReadQueue;
    long long _sourceOffset;
    NSError *_sourceReadChannelError;
    id /* block */ _streamReadChannelBlock;
    id<TSUStreamReadChannel> _streamReadChannel;
    NSObject<OS_dispatch_queue> *_streamReadChannelSourceQueue;
    id /* block */ _streamReadChannelSourceHandler;
    NSObject<OS_dispatch_queue> *_streamReadChannelOutputQueue;
    BOOL _isStreamOutputDone;
    long long _streamOutputOffset;
    unsigned long long _streamOutputLength;
    NSObject<OS_dispatch_data> *_currentStreamOutputData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_closeStreamReadChannel;
- (id)_currentDataIntersectionWithOffset:(long long)a0 length:(unsigned long long)a1 isReadDone:(BOOL *)a2;
- (void)addBarrier:(id /* block */)a0;
- (void)setLowWater:(unsigned long long)a0;
- (void)_readFromOffset:(long long)a0 length:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)_resetStreamReadChannel;
- (id)initWithReadChannel:(id)a0 sourceReadBufferSize:(unsigned long long)a1 streamReadChannelBlock:(id /* block */)a2;
- (id)initWithReadChannel:(id)a0 streamReadChannelBlock:(id /* block */)a1;
- (void)readFromOffset:(long long)a0 length:(unsigned long long)a1 queue:(id)a2 handler:(id /* block */)a3;
- (void)setStreamReadChannelSourceQueue:(id)a0 handler:(id /* block */)a1;

@end
