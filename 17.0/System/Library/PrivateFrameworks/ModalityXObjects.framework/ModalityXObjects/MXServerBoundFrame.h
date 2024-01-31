@class MXAudioFrame, MXSpeechProfileBuildRequest, MXCancelRequest, MXStreamingSpeechProfileBegin, MXStreamingSpeechProfileCommit, MXBeginDictation, MXSpeechProfile, MXBeginRequest, MXStreamingSpeechProfileAddData, MXSessionMetadata;

@interface MXServerBoundFrame : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSessionMetadata;
@property (retain, nonatomic) MXSessionMetadata *sessionMetadata;
@property (readonly, nonatomic) BOOL hasBeginRequest;
@property (retain, nonatomic) MXBeginRequest *beginRequest;
@property (readonly, nonatomic) BOOL hasAudioFrame;
@property (retain, nonatomic) MXAudioFrame *audioFrame;
@property (readonly, nonatomic) BOOL hasSpeechProfile;
@property (retain, nonatomic) MXSpeechProfile *speechProfile;
@property (readonly, nonatomic) BOOL hasCancelRequest;
@property (retain, nonatomic) MXCancelRequest *cancelRequest;
@property (readonly, nonatomic) BOOL hasBeginDictation;
@property (retain, nonatomic) MXBeginDictation *beginDictation;
@property (readonly, nonatomic) BOOL hasSpeechProfileRequest;
@property (retain, nonatomic) MXSpeechProfileBuildRequest *speechProfileRequest;
@property (readonly, nonatomic) BOOL hasStreamingSpeechProfileRequest;
@property (retain, nonatomic) MXStreamingSpeechProfileBegin *streamingSpeechProfileRequest;
@property (readonly, nonatomic) BOOL hasStreamingSpeechProfileData;
@property (retain, nonatomic) MXStreamingSpeechProfileAddData *streamingSpeechProfileData;
@property (readonly, nonatomic) BOOL hasStreamingSpeechProfileCommit;
@property (retain, nonatomic) MXStreamingSpeechProfileCommit *streamingSpeechProfileCommit;
@property (nonatomic) BOOL hasPayload;
@property (nonatomic) int payload;

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
- (int)StringAsPayload:(id)a0;
- (void)clearOneofValuesForPayload;
- (id)payloadAsString:(int)a0;

@end
