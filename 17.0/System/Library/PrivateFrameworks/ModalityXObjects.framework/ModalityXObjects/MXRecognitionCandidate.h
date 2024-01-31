@class NSString, MXRecognitionResult, MXAudioAnalytics, MXLatnnMitigatorResult;

@interface MXRecognitionCandidate : PBCodable <NSCopying> {
    struct { unsigned char snr : 1; unsigned char watermarkPeakAverage : 1; unsigned char fingerprintDetection : 1; unsigned char returnCode : 1; unsigned char watermarkDetection : 1; } _has;
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
@property (readonly, nonatomic) BOOL hasResultId;
@property (retain, nonatomic) NSString *resultId;
@property (nonatomic) BOOL hasSnr;
@property (nonatomic) double snr;
@property (nonatomic) BOOL hasFingerprintDetection;
@property (nonatomic) int fingerprintDetection;
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
- (int)StringAsFingerprintDetection:(id)a0;
- (int)StringAsWatermarkDetection:(id)a0;
- (id)fingerprintDetectionAsString:(int)a0;
- (id)watermarkDetectionAsString:(int)a0;

@end
