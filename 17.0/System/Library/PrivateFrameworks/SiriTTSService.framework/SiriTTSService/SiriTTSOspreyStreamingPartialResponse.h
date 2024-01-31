@class NSData, NSArray;

@interface SiriTTSOspreyStreamingPartialResponse : NSObject

@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (readonly, nonatomic) NSData *audioData;
@property (readonly, nonatomic) NSArray *timingInfos;

+ (void)processServerLogs:(id)a0;

- (void).cxx_destruct;
- (id)initWithOspreyPartialResponse:(id)a0;

@end
