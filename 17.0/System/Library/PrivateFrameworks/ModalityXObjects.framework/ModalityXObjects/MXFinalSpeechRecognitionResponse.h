@class NSString, MXRecognitionResult, MXAudioAnalytics, MXLatnnMitigatorResult;

@interface MXFinalSpeechRecognitionResponse : PBCodable <NSCopying> {
    struct { unsigned char watermarkPeakAverage : 1; unsigned char langProfileRecreateCodes : 1; unsigned char returnCode : 1; unsigned char watermarkDetection : 1; unsigned char hasResult : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSpeechId;
@property (retain, nonatomic) NSString *speechId;
@property (readonly, nonatomic) BOOL hasSessionId;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) BOOL hasReturnCode;
@property (nonatomic) int returnCode;
@property (readonly, nonatomic) BOOL hasReturnStr;
@property (retain, nonatomic) NSString *returnStr;
@property (readonly, nonatomic) BOOL hasRecognitionResult;
@property (retain, nonatomic) MXRecognitionResult *recognitionResult;
@property (nonatomic) BOOL hasLangProfileRecreateCodes;
@property (nonatomic) int langProfileRecreateCodes;
@property (readonly, nonatomic) BOOL hasAudioAnalytics;
@property (retain, nonatomic) MXAudioAnalytics *audioAnalytics;
@property (nonatomic) BOOL hasWatermarkDetection;
@property (nonatomic) int watermarkDetection;
@property (nonatomic) BOOL hasWatermarkPeakAverage;
@property (nonatomic) double watermarkPeakAverage;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasLatnnMitigatorResult;
@property (retain, nonatomic) MXLatnnMitigatorResult *latnnMitigatorResult;
@property (readonly, nonatomic) BOOL hasRequestLocale;
@property (retain, nonatomic) NSString *requestLocale;
@property (nonatomic) BOOL hasHasResult;
@property (nonatomic) BOOL hasResult;

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
- (int)StringAsLangProfileRecreateCodes:(id)a0;
- (int)StringAsWatermarkDetection:(id)a0;
- (id)langProfileRecreateCodesAsString:(int)a0;
- (id)watermarkDetectionAsString:(int)a0;

@end
