@class PBDataReader, GEOPDPhoto, GEOPDBusinessHours, GEOPDEntity, GEOPDTrailHeadTrailFactoidData, NSMutableArray, PBUnknownFields;

@interface GEOPDTrail : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBusinessHours *_businessHours;
    GEOPDEntity *_entity;
    GEOPDTrailHeadTrailFactoidData *_factoid;
    NSMutableArray *_hoursOfOperations;
    NSMutableArray *_mapsIds;
    GEOPDPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _shouldHighlight;
    struct { unsigned char has_shouldHighlight : 1; unsigned char read_unknownFields : 1; unsigned char read_businessHours : 1; unsigned char read_entity : 1; unsigned char read_factoid : 1; unsigned char read_hoursOfOperations : 1; unsigned char read_mapsIds : 1; unsigned char read_photo : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
