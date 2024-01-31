@class NTPBBinningConfig, NTPBPersonalizationTreatment, NSMutableArray;

@interface NTPBPersonalizationConfig : PBCodable <NSCopying> {
    struct { unsigned char moduloForHashing : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBinningConfig;
@property (retain, nonatomic) NTPBBinningConfig *binningConfig;
@property (nonatomic) BOOL hasModuloForHashing;
@property (nonatomic) long long moduloForHashing;
@property (readonly, nonatomic) BOOL hasDefaultPersonalizationTreatment;
@property (retain, nonatomic) NTPBPersonalizationTreatment *defaultPersonalizationTreatment;
@property (retain, nonatomic) NSMutableArray *personalizationBuckets;
@property (retain, nonatomic) NSMutableArray *personalizationTreatments;

+ (Class)personalizationBucketsType;
+ (Class)personalizationTreatmentsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addPersonalizationBuckets:(id)a0;
- (void)addPersonalizationTreatments:(id)a0;
- (void)clearPersonalizationBuckets;
- (void)clearPersonalizationTreatments;
- (id)personalizationBucketsAtIndex:(unsigned long long)a0;
- (unsigned long long)personalizationBucketsCount;
- (id)personalizationTreatmentsAtIndex:(unsigned long long)a0;
- (unsigned long long)personalizationTreatmentsCount;

@end
