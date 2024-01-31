@class GEOPBTransitArtwork, PBUnknownFields, PBDataReader, GEOFormattedString, GEOStyleAttributes;

@interface GEOLabelInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOFormattedString *_detail;
    GEOPBTransitArtwork *_iconArtwork;
    GEOStyleAttributes *_labelStyleAttributes;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_detail : 1; unsigned char read_iconArtwork : 1; unsigned char read_labelStyleAttributes : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) BOOL hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasIconArtwork;
@property (retain, nonatomic) GEOPBTransitArtwork *iconArtwork;
@property (readonly, nonatomic) BOOL hasLabelStyleAttributes;
@property (retain, nonatomic) GEOStyleAttributes *labelStyleAttributes;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
