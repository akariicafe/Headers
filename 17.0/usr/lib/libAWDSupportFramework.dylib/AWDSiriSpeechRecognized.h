@interface AWDSiriSpeechRecognized : PBCodable <NSCopying> {
    struct { unsigned char durationFromVoiceRecordingEnd : 1; unsigned char durationFromVoiceSendEnd : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDurationFromVoiceRecordingEnd;
@property (nonatomic) unsigned long long durationFromVoiceRecordingEnd;
@property (nonatomic) BOOL hasDurationFromVoiceSendEnd;
@property (nonatomic) unsigned long long durationFromVoiceSendEnd;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
