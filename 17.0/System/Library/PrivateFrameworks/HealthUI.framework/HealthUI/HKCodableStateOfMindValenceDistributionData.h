@interface HKCodableStateOfMindValenceDistributionData : PBCodable <NSCopying> {
    struct APPLE_HKCodableStateOfMindValenceDistributionData_1 { unsigned char maximumValence : 1; unsigned char minimumValence : 1; unsigned char sampleCount : 1; unsigned char reflectiveInterval : 1; } _has;
}

@property (nonatomic) BOOL hasMinimumValence;
@property (nonatomic) double minimumValence;
@property (nonatomic) BOOL hasMaximumValence;
@property (nonatomic) double maximumValence;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) long long sampleCount;
@property (nonatomic) BOOL hasReflectiveInterval;
@property (nonatomic) int reflectiveInterval;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsReflectiveInterval:(id)a0;
- (id)reflectiveIntervalAsString:(int)a0;

@end
