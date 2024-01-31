@class HKCodableDateInterval, NSString;

@interface HKCodableSummaryTrendLineViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryTrendLineViewModel_1 { unsigned char average : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (nonatomic) BOOL hasAverage;
@property (nonatomic) double average;
@property (readonly, nonatomic) BOOL hasXAxisLabel;
@property (retain, nonatomic) NSString *xAxisLabel;
@property (readonly, nonatomic) BOOL hasLineLabel;
@property (retain, nonatomic) NSString *lineLabel;

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
