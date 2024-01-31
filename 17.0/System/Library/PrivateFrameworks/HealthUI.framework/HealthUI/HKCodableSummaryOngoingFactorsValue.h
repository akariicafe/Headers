@interface HKCodableSummaryOngoingFactorsValue : PBCodable <NSCopying> {
    struct { long long *list; unsigned long long count; unsigned long long size; } _categoryValueRawValues;
    struct APPLE_HKCodableSummaryOngoingFactorsValue_1 { unsigned char earliestStartDate : 1; unsigned char latestEndDate : 1; } _has;
}

@property (readonly, nonatomic) unsigned long long categoryValueRawValuesCount;
@property (readonly, nonatomic) long long *categoryValueRawValues;
@property (nonatomic) BOOL hasEarliestStartDate;
@property (nonatomic) double earliestStartDate;
@property (nonatomic) BOOL hasLatestEndDate;
@property (nonatomic) double latestEndDate;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCategoryValueRawValues:(long long)a0;
- (long long)categoryValueRawValuesAtIndex:(unsigned long long)a0;
- (void)clearCategoryValueRawValues;
- (void)setCategoryValueRawValues:(long long *)a0 count:(unsigned long long)a1;

@end
