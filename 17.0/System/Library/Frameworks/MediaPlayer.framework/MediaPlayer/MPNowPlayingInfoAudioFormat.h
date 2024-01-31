@class NSString, MRContentItemMetadataAudioFormat;

@interface MPNowPlayingInfoAudioFormat : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MRContentItemMetadataAudioFormat *mediaRemoteAudioFormat;
@property (nonatomic) long long tier;
@property (nonatomic) long long bitrate;
@property (nonatomic) long long sampleRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) unsigned int codec;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *stableVariantID;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel;
@property (nonatomic) unsigned int channelLayout;
@property (retain, nonatomic) NSString *audioChannelLayoutDescription;
@property (readonly, nonatomic) long long badging;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)humanDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMediaRemoteAudioFormat:(id)a0;
- (id)_descriptionForChannelLayoutTag:(unsigned int)a0;
- (id)debugBitDepthDescription;
- (id)debugBitRateDescription;
- (id)debugChannelCountDescription;
- (id)debugChannelLayoutDescription;
- (id)debugCodecDescription;
- (id)debugSampleRateDescription;
- (id)debugTierDescription;

@end
