@class NSString, NSMutableArray;

@interface CSAudioProcessWaitingBuffer : NSObject

@property (retain, nonatomic) NSMutableArray *buffer;
@property (nonatomic) unsigned long long maxWaitingBufferSizeInSampleCount;
@property (nonatomic) unsigned long long bufferedSampleCount;
@property (readonly, nonatomic) NSString *uuid;

- (void)dealloc;
- (void).cxx_destruct;
- (void)addAudioChunk:(id)a0;
- (void)addAudioChunk:(id)a0 withBufferedTimestamp:(id)a1;
- (id)fetchAudioChunksFromBuffer;
- (id)initWithUUID:(id)a0 waitingBufferMaxLengthInSec:(float)a1;

@end
