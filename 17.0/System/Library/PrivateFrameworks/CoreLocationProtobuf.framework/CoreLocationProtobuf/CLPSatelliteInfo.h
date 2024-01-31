@interface CLPSatelliteInfo : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _azimuths;
    struct { int *list; unsigned long long count; unsigned long long size; } _cnos;
    struct { int *list; unsigned long long count; unsigned long long size; } _elevations;
    struct { BOOL *list; unsigned long long count; unsigned long long size; } _isUsedInFixes;
    struct { int *list; unsigned long long count; unsigned long long size; } _satIds;
}

@property (readonly, nonatomic) unsigned long long satIdsCount;
@property (readonly, nonatomic) int *satIds;
@property (readonly, nonatomic) unsigned long long cnosCount;
@property (readonly, nonatomic) int *cnos;
@property (readonly, nonatomic) unsigned long long azimuthsCount;
@property (readonly, nonatomic) int *azimuths;
@property (readonly, nonatomic) unsigned long long elevationsCount;
@property (readonly, nonatomic) int *elevations;
@property (readonly, nonatomic) unsigned long long isUsedInFixesCount;
@property (readonly, nonatomic) BOOL *isUsedInFixes;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearElevations;
- (void)addAzimuths:(int)a0;
- (void)addCnos:(int)a0;
- (void)addElevations:(int)a0;
- (void)addIsUsedInFixes:(BOOL)a0;
- (void)addSatIds:(int)a0;
- (int)azimuthsAtIndex:(unsigned long long)a0;
- (void)clearAzimuths;
- (void)clearCnos;
- (void)clearIsUsedInFixes;
- (void)clearSatIds;
- (int)cnosAtIndex:(unsigned long long)a0;
- (int)elevationsAtIndex:(unsigned long long)a0;
- (BOOL)isUsedInFixesAtIndex:(unsigned long long)a0;
- (int)satIdsAtIndex:(unsigned long long)a0;
- (void)setAzimuths:(int *)a0 count:(unsigned long long)a1;
- (void)setCnos:(int *)a0 count:(unsigned long long)a1;
- (void)setElevations:(int *)a0 count:(unsigned long long)a1;
- (void)setIsUsedInFixes:(BOOL *)a0 count:(unsigned long long)a1;
- (void)setSatIds:(int *)a0 count:(unsigned long long)a1;

@end
