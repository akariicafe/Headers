@interface AWDPowerAudioMetrics : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _audioVolumeLevelDurationSpeakers;
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _audioVolumeLevelDurations;
    struct { unsigned char timestamp : 1; unsigned char audioHeadsetDuration : 1; unsigned char audioHeadsetPowerMicroWatt : 1; unsigned char audioSpeakerDuration : 1; unsigned char audioSpeakerPowerMicroWatt : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasAudioSpeakerPowerMicroWatt;
@property (nonatomic) unsigned int audioSpeakerPowerMicroWatt;
@property (nonatomic) BOOL hasAudioHeadsetPowerMicroWatt;
@property (nonatomic) unsigned int audioHeadsetPowerMicroWatt;
@property (nonatomic) BOOL hasAudioSpeakerDuration;
@property (nonatomic) unsigned int audioSpeakerDuration;
@property (nonatomic) BOOL hasAudioHeadsetDuration;
@property (nonatomic) unsigned int audioHeadsetDuration;
@property (readonly, nonatomic) unsigned long long audioVolumeLevelDurationsCount;
@property (readonly, nonatomic) unsigned int *audioVolumeLevelDurations;
@property (readonly, nonatomic) unsigned long long audioVolumeLevelDurationSpeakersCount;
@property (readonly, nonatomic) unsigned int *audioVolumeLevelDurationSpeakers;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addAudioVolumeLevelDuration:(unsigned int)a0;
- (void)addAudioVolumeLevelDurationSpeaker:(unsigned int)a0;
- (unsigned int)audioVolumeLevelDurationAtIndex:(unsigned long long)a0;
- (unsigned int)audioVolumeLevelDurationSpeakerAtIndex:(unsigned long long)a0;
- (void)clearAudioVolumeLevelDurationSpeakers;
- (void)clearAudioVolumeLevelDurations;
- (void)setAudioVolumeLevelDurationSpeakers:(unsigned int *)a0 count:(unsigned long long)a1;
- (void)setAudioVolumeLevelDurations:(unsigned int *)a0 count:(unsigned long long)a1;

@end
