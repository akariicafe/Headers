@interface HDCodableMedicationScheduleCompatibilityVersionRange : PBCodable <NSCopying> {
    struct { unsigned char minimum : 1; unsigned char origin : 1; } _has;
}

@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) long long minimum;
@property (nonatomic) BOOL hasOrigin;
@property (nonatomic) long long origin;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
