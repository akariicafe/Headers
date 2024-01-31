@interface ASCodableDatabaseCompetitionPreferredVictoryBadgeStyles : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _styles;
}

@property (readonly, nonatomic) unsigned long long stylesCount;
@property (readonly, nonatomic) int *styles;

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
- (void)addStyles:(int)a0;
- (void)clearStyles;
- (void)setStyles:(int *)a0 count:(unsigned long long)a1;
- (int)stylesAtIndex:(unsigned long long)a0;

@end
