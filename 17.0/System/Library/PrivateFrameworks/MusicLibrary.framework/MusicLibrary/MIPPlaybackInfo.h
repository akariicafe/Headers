@class NSString;

@interface MIPPlaybackInfo : PBCodable <NSCopying> {
    struct { unsigned char durationInSamples : 1; unsigned char gaplessEncodingDrainCode : 1; unsigned char gaplessFrameResyncCode : 1; unsigned char gaplessHeuristicCode : 1; unsigned char gaplessHeuristicDelayCode : 1; unsigned char startTime : 1; unsigned char stopTime : 1; unsigned char volumeNormalizationEnergy : 1; unsigned char beatsPerMinute : 1; unsigned char bitRate : 1; unsigned char codecSubType : 1; unsigned char codecType : 1; unsigned char dataKind : 1; unsigned char progressionDirection : 1; unsigned char relativeVolume : 1; unsigned char sampleRate : 1; } _has;
}

@property (nonatomic) BOOL hasBitRate;
@property (nonatomic) int bitRate;
@property (nonatomic) BOOL hasCodecType;
@property (nonatomic) int codecType;
@property (nonatomic) BOOL hasCodecSubType;
@property (nonatomic) int codecSubType;
@property (nonatomic) BOOL hasDataKind;
@property (nonatomic) int dataKind;
@property (readonly, nonatomic) BOOL hasDataUrl;
@property (retain, nonatomic) NSString *dataUrl;
@property (readonly, nonatomic) BOOL hasEqPreset;
@property (retain, nonatomic) NSString *eqPreset;
@property (readonly, nonatomic) BOOL hasPlaybackFormat;
@property (retain, nonatomic) NSString *playbackFormat;
@property (nonatomic) BOOL hasGaplessHeuristicCode;
@property (nonatomic) long long gaplessHeuristicCode;
@property (nonatomic) BOOL hasGaplessHeuristicDelayCode;
@property (nonatomic) long long gaplessHeuristicDelayCode;
@property (nonatomic) BOOL hasGaplessEncodingDrainCode;
@property (nonatomic) long long gaplessEncodingDrainCode;
@property (nonatomic) BOOL hasGaplessFrameResyncCode;
@property (nonatomic) long long gaplessFrameResyncCode;
@property (nonatomic) BOOL hasRelativeVolume;
@property (nonatomic) int relativeVolume;
@property (nonatomic) BOOL hasSampleRate;
@property (nonatomic) int sampleRate;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) long long startTime;
@property (nonatomic) BOOL hasStopTime;
@property (nonatomic) long long stopTime;
@property (nonatomic) BOOL hasVolumeNormalizationEnergy;
@property (nonatomic) long long volumeNormalizationEnergy;
@property (nonatomic) BOOL hasBeatsPerMinute;
@property (nonatomic) int beatsPerMinute;
@property (nonatomic) BOOL hasProgressionDirection;
@property (nonatomic) int progressionDirection;
@property (nonatomic) BOOL hasDurationInSamples;
@property (nonatomic) long long durationInSamples;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
