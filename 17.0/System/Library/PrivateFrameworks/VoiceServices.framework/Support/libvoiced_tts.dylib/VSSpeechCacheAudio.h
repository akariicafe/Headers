@class NSString, NSArray, NSData, VSAudioData;

@interface VSSpeechCacheAudio : NSObject <VSSpeechCacheItem>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;
@property (readonly, nonatomic) long long magicVersion;
@property (readonly, nonatomic) NSArray *timingInfos;
@property (readonly, nonatomic) NSString *voiceKey;
@property (readonly, nonatomic) NSString *voiceResourceKey;
@property (readonly, nonatomic) VSAudioData *audio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
