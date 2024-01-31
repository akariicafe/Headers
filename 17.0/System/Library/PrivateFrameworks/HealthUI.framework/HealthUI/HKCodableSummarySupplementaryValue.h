@class HKCodableDateInterval;

@interface HKCodableSummarySupplementaryValue : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummarySupplementaryValue_1 { unsigned char dataCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (nonatomic) BOOL hasDataCount;
@property (nonatomic) long long dataCount;

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
