@class HKCodableChartQuantityDataSourceQueryData;

@interface HKCodableChartCardioFitnessQueryData : PBCodable <NSCopying> {
    struct APPLE_HKCodableChartCardioFitnessQueryData_1 { unsigned char age : 1; unsigned char biologicalSex : 1; unsigned char cardioFitnessLevelEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasCardioFitnessLevelEnabled;
@property (nonatomic) long long cardioFitnessLevelEnabled;
@property (nonatomic) BOOL hasBiologicalSex;
@property (nonatomic) long long biologicalSex;
@property (nonatomic) BOOL hasAge;
@property (nonatomic) long long age;
@property (readonly, nonatomic) BOOL hasQuantityData;
@property (retain, nonatomic) HKCodableChartQuantityDataSourceQueryData *quantityData;

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
