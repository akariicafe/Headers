@class PBDataReader, GEOPDPhoto, GEOLocalizedString, PBUnknownFields;

@interface GEOPDTooltip : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOLocalizedString *_actionLink;
    GEOPDPhoto *_photo;
    GEOLocalizedString *_subtitle;
    GEOLocalizedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_actionLink : 1; unsigned char read_photo : 1; unsigned char read_subtitle : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

+ (id)tooltipFromPlaceData:(id)a0;

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
