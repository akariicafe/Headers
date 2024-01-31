@class HKCodableQuantity, HKCodableMetadataDictionary;

@interface HKCodableSampleChartData : PBCodable <NSCopying> {
    struct APPLE_HKCodableSampleChartData_1 { unsigned char dataType : 1; unsigned char endDate : 1; unsigned char int64Value : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
@property (nonatomic) BOOL hasInt64Value;
@property (nonatomic) long long int64Value;
@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (readonly, nonatomic) BOOL hasQuantity;
@property (retain, nonatomic) HKCodableQuantity *quantity;

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
