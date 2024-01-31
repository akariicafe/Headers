@class HKCodableMenstrualCyclesProjectionKind, HKCodableMenstrualCyclesProjection;

@interface HKCodableMenstrualCyclesProjectionHighlightTileViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableMenstrualCyclesProjectionHighlightTileViewModel_1 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProjection;
@property (retain, nonatomic) HKCodableMenstrualCyclesProjection *projection;
@property (readonly, nonatomic) BOOL hasProjectionKind;
@property (retain, nonatomic) HKCodableMenstrualCyclesProjectionKind *projectionKind;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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
