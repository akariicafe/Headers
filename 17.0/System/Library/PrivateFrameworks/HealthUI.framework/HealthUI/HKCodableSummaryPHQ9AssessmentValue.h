@interface HKCodableSummaryPHQ9AssessmentValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryPHQ9AssessmentValue_1 { unsigned char dateData : 1; unsigned char risk : 1; unsigned char score : 1; } _has;
}

@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) long long score;
@property (nonatomic) BOOL hasRisk;
@property (nonatomic) long long risk;

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
