@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CSAudioFileReaderDelegate;

@interface CSAudioFileReader : NSObject {
    struct OpaqueExtAudioFile { } *_fFile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_audioFeedTimer;
    double _bufferDuration;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _outASBD;
}

@property (weak, nonatomic) id<CSAudioFileReaderDelegate> delegate;

- (void)stopRecording;
- (void)close;
- (BOOL)startRecording;
- (BOOL)setRecordBufferDuration:(double)a0;
- (id)initWithURL:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_readAudioBufferAndFeed;
- (BOOL)prepareRecording:(id)a0;
- (id)readSamplesFromChannelIdx:(unsigned int)a0;

@end
