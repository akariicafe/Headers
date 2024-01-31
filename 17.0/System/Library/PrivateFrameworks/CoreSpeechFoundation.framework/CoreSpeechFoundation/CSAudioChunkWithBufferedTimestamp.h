@class CSAudioChunk, NSNumber;

@interface CSAudioChunkWithBufferedTimestamp : NSObject

@property (retain, nonatomic) CSAudioChunk *audioChunk;
@property (retain, nonatomic) NSNumber *bufferedTimestamp;

- (void).cxx_destruct;
- (id)initWithAudioChunk:(id)a0 bufferedTimestamp:(id)a1;

@end
