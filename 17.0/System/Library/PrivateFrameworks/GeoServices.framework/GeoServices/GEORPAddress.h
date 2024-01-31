@class PBDataReader, NSString, GEOAddress, GEOPDAddressObject;

@interface GEORPAddress : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEOPDAddressObject *_addressObject;
    NSString *_addressString;
    GEOAddress *_geoAddress;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_addressObject : 1; unsigned char read_addressString : 1; unsigned char read_geoAddress : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasGeoAddress;
@property (retain, nonatomic) GEOAddress *geoAddress;
@property (readonly, nonatomic) BOOL hasAddressString;
@property (retain, nonatomic) NSString *addressString;
@property (readonly, nonatomic) BOOL hasAddressObject;
@property (retain, nonatomic) GEOPDAddressObject *addressObject;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
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
