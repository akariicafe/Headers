@class NSString;

@interface SIRINLUEXTERNALAsrTokenInformation : PBCodable <NSCopying> {
    struct { unsigned char confidenceScore : 1; unsigned char beginIndex : 1; unsigned char endIndex : 1; unsigned char endMilliSeconds : 1; unsigned char startMilliSeconds : 1; unsigned char addSpaceAfter : 1; unsigned char removeSpaceAfter : 1; unsigned char removeSpaceBefore : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPostItnText;
@property (retain, nonatomic) NSString *postItnText;
@property (readonly, nonatomic) BOOL hasPhoneSequence;
@property (retain, nonatomic) NSString *phoneSequence;
@property (readonly, nonatomic) BOOL hasIpaPhoneSequence;
@property (retain, nonatomic) NSString *ipaPhoneSequence;
@property (nonatomic) BOOL hasAddSpaceAfter;
@property (nonatomic) BOOL addSpaceAfter;
@property (nonatomic) BOOL hasRemoveSpaceAfter;
@property (nonatomic) BOOL removeSpaceAfter;
@property (nonatomic) BOOL hasRemoveSpaceBefore;
@property (nonatomic) BOOL removeSpaceBefore;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) double confidenceScore;
@property (nonatomic) BOOL hasBeginIndex;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) BOOL hasEndIndex;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) BOOL hasStartMilliSeconds;
@property (nonatomic) int startMilliSeconds;
@property (nonatomic) BOOL hasEndMilliSeconds;
@property (nonatomic) int endMilliSeconds;

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
