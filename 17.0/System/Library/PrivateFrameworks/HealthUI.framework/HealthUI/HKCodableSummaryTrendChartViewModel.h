@class NSString, HKCodableDateInterval, HKCodableQuantity;

@interface HKCodableSummaryTrendChartViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryTrendChartViewModel_1 { unsigned char coveredTimeScopeRawValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasChartString;
@property (retain, nonatomic) NSString *chartString;
@property (readonly, nonatomic) BOOL hasChangeTypeRawValue;
@property (retain, nonatomic) NSString *changeTypeRawValue;
@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (retain, nonatomic) NSString *objectTypeIdentifier;
@property (nonatomic) BOOL hasCoveredTimeScopeRawValue;
@property (nonatomic) long long coveredTimeScopeRawValue;
@property (readonly, nonatomic) BOOL hasBaselineDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *baselineDateInterval;
@property (readonly, nonatomic) BOOL hasBaselineQuantity;
@property (retain, nonatomic) HKCodableQuantity *baselineQuantity;
@property (readonly, nonatomic) BOOL hasChangeDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *changeDateInterval;
@property (readonly, nonatomic) BOOL hasChangeQuantity;
@property (retain, nonatomic) HKCodableQuantity *changeQuantity;

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
