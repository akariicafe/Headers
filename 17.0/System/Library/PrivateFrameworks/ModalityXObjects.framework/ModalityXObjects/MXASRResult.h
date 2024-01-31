@class NSString, MXRecognitionCandidate, MXFinalSpeechRecognitionResponse;

@interface MXASRResult : PBCodable <NSCopying> {
    struct { unsigned char payload : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestId;
@property (retain, nonatomic) NSString *requestId;
@property (readonly, nonatomic) BOOL hasRecognitionCandidate;
@property (retain, nonatomic) MXRecognitionCandidate *recognitionCandidate;
@property (readonly, nonatomic) BOOL hasFinalSpeechRecognitionResponse;
@property (retain, nonatomic) MXFinalSpeechRecognitionResponse *finalSpeechRecognitionResponse;
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
