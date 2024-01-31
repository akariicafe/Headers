@class GEOResource, PBDataReader, PBUnknownFields;

@interface GEOStaleResource : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOResource *_desiredResource;
    GEOResource *_fallbackResource;
    double _originalTimestamp;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char has_originalTimestamp : 1; unsigned char read_unknownFields : 1; unsigned char read_desiredResource : 1; unsigned char read_fallbackResource : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasDesiredResource;
@property (retain, nonatomic) GEOResource *desiredResource;
@property (readonly, nonatomic) BOOL hasFallbackResource;
@property (retain, nonatomic) GEOResource *fallbackResource;
@property (nonatomic) BOOL hasOriginalTimestamp;
@property (nonatomic) double originalTimestamp;
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
