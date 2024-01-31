@class GEORPCorrectedCoordinate, PBDataReader, GEORPFeedbackAddressFields, GEORPMapLocation, GEORPAccessPointCorrections, PBUnknownFields;

@interface GEORPAddressCorrections : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPAccessPointCorrections *_accessPoint;
    GEORPFeedbackAddressFields *_addressFields;
    GEORPCorrectedCoordinate *_coordinate;
    GEORPMapLocation *_mapLocation;
    GEORPFeedbackAddressFields *_originalAddressFields;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_accessPoint : 1; unsigned char read_addressFields : 1; unsigned char read_coordinate : 1; unsigned char read_mapLocation : 1; unsigned char read_originalAddressFields : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasAddressFields;
@property (retain, nonatomic) GEORPFeedbackAddressFields *addressFields;
@property (readonly, nonatomic) BOOL hasCoordinate;
@property (retain, nonatomic) GEORPCorrectedCoordinate *coordinate;
@property (readonly, nonatomic) BOOL hasMapLocation;
@property (retain, nonatomic) GEORPMapLocation *mapLocation;
@property (readonly, nonatomic) BOOL hasAccessPoint;
@property (retain, nonatomic) GEORPAccessPointCorrections *accessPoint;
@property (readonly, nonatomic) BOOL hasOriginalAddressFields;
@property (retain, nonatomic) GEORPFeedbackAddressFields *originalAddressFields;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)hasGreenTeaWithValue:(BOOL)a0;
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
