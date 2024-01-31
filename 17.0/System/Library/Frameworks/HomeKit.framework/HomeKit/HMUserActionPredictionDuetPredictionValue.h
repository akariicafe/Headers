@class NSString;

@interface HMUserActionPredictionDuetPredictionValue : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char predictionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHomeIdentifier;
@property (retain, nonatomic) NSString *homeIdentifier;
@property (readonly, nonatomic) BOOL hasTargetIdentifier;
@property (retain, nonatomic) NSString *targetIdentifier;
@property (readonly, nonatomic) BOOL hasTargetAccessoryServiceIdentifier;
@property (retain, nonatomic) NSString *targetAccessoryServiceIdentifier;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (nonatomic) BOOL hasPredictionType;
@property (nonatomic) int predictionType;

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
- (int)StringAsPredictionType:(id)a0;
- (id)predictionTypeAsString:(int)a0;

@end
