@class NSData, HDCodableMedicationScheduleCompatibilityVersionRange;

@interface HDCodableMedicationScheduleData : PBCodable <NSCopying> {
    struct { unsigned char creationDate : 1; } _has;
}

@property (readonly, nonatomic) BOOL isLocallyUnavailable;
@property (readonly, nonatomic) BOOL hasFutureCompatibilityVersion;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (nonatomic) BOOL hasCreationDate;
@property (nonatomic) double creationDate;
@property (readonly, nonatomic) BOOL hasCompatibilityVersionRange;
@property (retain, nonatomic) HDCodableMedicationScheduleCompatibilityVersionRange *compatibilityVersionRange;
@property (readonly, nonatomic) BOOL hasScheduleData;
@property (retain, nonatomic) NSData *scheduleData;

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
