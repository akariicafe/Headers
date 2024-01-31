@class VSMappedData, NSMutableArray;

@interface VSStreamAudioData : NSObject

@property (retain, nonatomic) VSMappedData *mappedData;
@property (retain, nonatomic) NSMutableArray *mappedAudioInfo;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;

- (void).cxx_destruct;
- (double)duration;
- (void)appendAudioData:(id)a0 packetCount:(unsigned long long)a1 packetDescriptions:(id)a2;
- (void)enumerateAudioWithBlock:(id /* block */)a0;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0;
- (BOOL)writeWaveToFilePath:(id)a0;

@end
