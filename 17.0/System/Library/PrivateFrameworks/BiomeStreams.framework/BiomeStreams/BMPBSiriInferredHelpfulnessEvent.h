@class NSString;

@interface BMPBSiriInferredHelpfulnessEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; unsigned char inferredHelpfulnessScore : 1; unsigned char restatementScore : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (nonatomic) BOOL hasInferredHelpfulnessScore;
@property (nonatomic) double inferredHelpfulnessScore;
@property (nonatomic) BOOL hasRestatementScore;
@property (nonatomic) double restatementScore;
@property (readonly, nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) NSString *turnID;
@property (readonly, nonatomic) BOOL hasModelID;
@property (retain, nonatomic) NSString *modelID;

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
