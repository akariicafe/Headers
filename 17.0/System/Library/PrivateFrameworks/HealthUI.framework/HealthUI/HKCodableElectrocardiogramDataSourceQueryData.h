@class NSMutableArray;

@interface HKCodableElectrocardiogramDataSourceQueryData : PBCodable <NSCopying> {
    struct APPLE_HKCodableElectrocardiogramDataSourceQueryData_1 { unsigned char activeAlgorithmVersionRawValue : 1; unsigned char count : 1; } _has;
}

@property (nonatomic) BOOL hasCount;
@property (nonatomic) long long count;
@property (retain, nonatomic) NSMutableArray *samples;
@property (nonatomic) BOOL hasActiveAlgorithmVersionRawValue;
@property (nonatomic) long long activeAlgorithmVersionRawValue;

+ (Class)samplesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addSamples:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)samplesAtIndex:(unsigned long long)a0;
- (void)clearSamples;
- (unsigned long long)samplesCount;

@end
