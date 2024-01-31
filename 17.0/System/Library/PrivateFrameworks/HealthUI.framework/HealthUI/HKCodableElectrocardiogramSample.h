@class HKCodableDateInterval, HKCodableQuantity, NSData;

@interface HKCodableElectrocardiogramSample : PBCodable <NSCopying> {
    struct APPLE_HKCodableElectrocardiogramSample_1 { unsigned char algorithmVersionRawValue : 1; unsigned char classificationRawValue : 1; unsigned char privateSymptoms : 1; unsigned char symptomsStatusRawValue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasDateInterval;
@property (retain, nonatomic) HKCodableDateInterval *dateInterval;
@property (nonatomic) BOOL hasClassificationRawValue;
@property (nonatomic) long long classificationRawValue;
@property (readonly, nonatomic) BOOL hasAverageHeartRate;
@property (retain, nonatomic) HKCodableQuantity *averageHeartRate;
@property (nonatomic) BOOL hasSymptomsStatusRawValue;
@property (nonatomic) long long symptomsStatusRawValue;
@property (nonatomic) BOOL hasPrivateSymptoms;
@property (nonatomic) long long privateSymptoms;
@property (readonly, nonatomic) BOOL hasReadingData;
@property (retain, nonatomic) NSData *readingData;
@property (nonatomic) BOOL hasAlgorithmVersionRawValue;
@property (nonatomic) long long algorithmVersionRawValue;

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
