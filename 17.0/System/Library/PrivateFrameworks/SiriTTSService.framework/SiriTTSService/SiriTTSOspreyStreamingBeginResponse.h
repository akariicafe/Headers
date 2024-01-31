@class NSString;

@interface SiriTTSOspreyStreamingBeginResponse : NSObject

@property (readonly, nonatomic) NSString *voiceLanguage;
@property (readonly, nonatomic) NSString *voiceName;
@property (readonly, nonatomic) NSString *voiceFootprint;
@property (readonly, nonatomic) NSString *voiceType;
@property (readonly, nonatomic) NSString *voiceGender;
@property (readonly, nonatomic) long long voiceVersion;
@property (readonly, nonatomic) NSString *resourceLanguage;
@property (readonly, nonatomic) long long resourceVersion;
@property (readonly, nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) double bufferDuration;

- (void).cxx_destruct;
- (id)initWithOspreyBeginResponse:(id)a0;

@end
