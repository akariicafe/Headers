@class NSMutableData, NSData;

@interface VSAudioData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableData *mutableAudioData;
@property (retain, nonatomic) NSMutableData *mutableDescription;
@property (retain, nonatomic) NSData *audioData;
@property (nonatomic) struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } asbd;
@property (nonatomic) long long packetCount;
@property (retain, nonatomic) NSData *packetDescriptions;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (double)duration;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)concatenateWithAudio:(id)a0;
- (unsigned int)totalFrames;

@end
