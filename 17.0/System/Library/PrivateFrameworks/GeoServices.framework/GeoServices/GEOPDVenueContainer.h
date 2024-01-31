@class PBUnknownFields, GEOPDVenueLabel, PBDataReader;

@interface GEOPDVenueContainer : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _buildingIds;
    GEOPDVenueLabel *_label;
    unsigned long long _muid;
    unsigned long long _venueId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _browseType;
    struct { unsigned char has_muid : 1; unsigned char has_venueId : 1; unsigned char has_browseType : 1; unsigned char read_unknownFields : 1; unsigned char read_buildingIds : 1; unsigned char read_label : 1; unsigned char wrote_anyField : 1; } _flags;
}

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
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
