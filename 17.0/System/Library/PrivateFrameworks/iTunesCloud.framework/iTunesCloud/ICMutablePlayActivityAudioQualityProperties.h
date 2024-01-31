@class NSString;

@interface ICMutablePlayActivityAudioQualityProperties : ICPlayActivityAudioQualityProperties

@property (nonatomic) long long bitRate;
@property (nonatomic) long long bitDepth;
@property (nonatomic) NSString *channelLayoutDescription;
@property (nonatomic) unsigned int codec;
@property (nonatomic) long long sampleRate;
@property (nonatomic, getter=isSpatialized) BOOL spatialized;

- (void)setBitDepth:(long long)a0;
- (void)setSpatialized:(BOOL)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCodec:(unsigned int)a0;
- (void)setSampleRate:(long long)a0;
- (void)setBitRate:(long long)a0;
- (void)setChannelLayoutDescription:(id)a0;

@end
