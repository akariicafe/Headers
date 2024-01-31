@class NSString;

@interface MXRecognitionToken : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char endMilliSeconds : 1; unsigned char silenceStartMilliSeconds : 1; unsigned char startMilliSeconds : 1; unsigned char addSpaceAfter : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTokenText;
@property (retain, nonatomic) NSString *tokenText;
@property (nonatomic) BOOL hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) BOOL hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;
@property (nonatomic) BOOL hasSilenceStartMilliSeconds;
@property (nonatomic) int silenceStartMilliSeconds;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;
@property (nonatomic) BOOL hasAddSpaceAfter;
@property (nonatomic) BOOL addSpaceAfter;
@property (readonly, nonatomic) BOOL hasPhoneSeq;
@property (retain, nonatomic) NSString *phoneSeq;
@property (readonly, nonatomic) BOOL hasIpaPhoneSeq;
@property (retain, nonatomic) NSString *ipaPhoneSeq;

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
