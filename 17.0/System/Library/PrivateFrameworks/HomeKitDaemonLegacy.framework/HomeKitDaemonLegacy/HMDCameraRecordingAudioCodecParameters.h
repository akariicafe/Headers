@class NSNumber, NSArray, NSData;

@interface HMDCameraRecordingAudioCodecParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *audioChannelCount;
@property (readonly, copy, nonatomic) NSArray *bitRateModes;
@property (readonly, copy, nonatomic) NSArray *audioSampleRates;
@property (readonly, copy, nonatomic) NSNumber *maxAudioBitRate;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (id)initWithChannelCount:(id)a0 bitRateModes:(id)a1 audioSampleRates:(id)a2 maxAudioBitRate:(id)a3;

@end
