@class NSData;

@interface SFSSAudioData : NSObject

@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;

- (void).cxx_destruct;
- (double)duration;
- (BOOL)populateWithOpusData:(id)a0;
- (BOOL)populateWithPCMData:(id)a0;
- (id)initWithASBD:(struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })a0 rawData:(id)a1;

@end
