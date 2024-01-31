@class PBDataReader, NSString, GEOFormattedString, PBUnknownFields;

@interface GEOMiniCard : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_buttonText;
    GEOFormattedString *_detail;
    GEOFormattedString *_metadata;
    GEOFormattedString *_title;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    BOOL _shouldEmphasize;
    struct { unsigned char has_shouldEmphasize : 1; unsigned char read_unknownFields : 1; unsigned char read_buttonText : 1; unsigned char read_detail : 1; unsigned char read_metadata : 1; unsigned char read_title : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasTitle;
@property (retain, nonatomic) GEOFormattedString *title;
@property (readonly, nonatomic) BOOL hasDetail;
@property (retain, nonatomic) GEOFormattedString *detail;
@property (readonly, nonatomic) BOOL hasButtonText;
@property (retain, nonatomic) NSString *buttonText;
@property (nonatomic) BOOL hasShouldEmphasize;
@property (nonatomic) BOOL shouldEmphasize;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) GEOFormattedString *metadata;
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
