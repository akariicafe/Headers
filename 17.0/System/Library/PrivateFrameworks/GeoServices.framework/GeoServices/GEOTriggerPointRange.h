@class PBDataReader, GEOTriggerPoint, PBUnknownFields;

@interface GEOTriggerPointRange : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOTriggerPoint *_hideAtPoint;
    GEOTriggerPoint *_showAtPoint;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    unsigned int _displayTime;
    struct { unsigned char has_displayTime : 1; unsigned char read_unknownFields : 1; unsigned char read_hideAtPoint : 1; unsigned char read_showAtPoint : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasShowAtPoint;
@property (retain, nonatomic) GEOTriggerPoint *showAtPoint;
@property (readonly, nonatomic) BOOL hasHideAtPoint;
@property (retain, nonatomic) GEOTriggerPoint *hideAtPoint;
@property (nonatomic) BOOL hasDisplayTime;
@property (nonatomic) unsigned int displayTime;
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
