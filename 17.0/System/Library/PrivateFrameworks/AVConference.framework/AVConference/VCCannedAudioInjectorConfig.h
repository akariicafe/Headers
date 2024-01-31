@class NSString;

@interface VCCannedAudioInjectorConfig : NSObject

@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *fileName;
@property (nonatomic) BOOL fromBeginning;
@property (nonatomic) double startHostTime;
@property (nonatomic) double loopLength;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } audioFormat;
@property (nonatomic) unsigned int loopCount;
@property (nonatomic) unsigned int sineWaveFrequencyHz;
@property (nonatomic) double sineWaveAmplitude;
@property (nonatomic) BOOL forceVoiceActive;
@property (retain, nonatomic) id reportingAgent;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)isValid;

@end
