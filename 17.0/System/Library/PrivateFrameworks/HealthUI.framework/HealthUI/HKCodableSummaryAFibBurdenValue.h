@class HKCodableDayIndexRange, HKCodableAFibBurdenValue;

@interface HKCodableSummaryAFibBurdenValue : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBurdenValue;
@property (retain, nonatomic) HKCodableAFibBurdenValue *burdenValue;
@property (readonly, nonatomic) BOOL hasLastAnalysisDayIndexRange;
@property (retain, nonatomic) HKCodableDayIndexRange *lastAnalysisDayIndexRange;

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
