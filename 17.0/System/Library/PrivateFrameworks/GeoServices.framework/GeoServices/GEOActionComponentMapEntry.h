@interface GEOActionComponentMapEntry : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _placeDataComponents;
    int _actionComponent;
    struct { unsigned char has_actionComponent : 1; } _flags;
}

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
