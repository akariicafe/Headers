@class GEODirectionsRequestResponseAnalyticsData, GEOPDPlacesRequestResponseAnalyticsData, PBDataReader;

@interface GEOLogMsgEventServiceMetadata : PBCodable <NSCopying> {
    PBDataReader *_reader;
    GEODirectionsRequestResponseAnalyticsData *_directionsMetadata;
    GEOPDPlacesRequestResponseAnalyticsData *_placesMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _serviceMetadataType;
    struct { unsigned char has_serviceMetadataType : 1; unsigned char read_directionsMetadata : 1; unsigned char read_placesMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasServiceMetadataType;
@property (nonatomic) int serviceMetadataType;
@property (readonly, nonatomic) BOOL hasDirectionsMetadata;
@property (retain, nonatomic) GEODirectionsRequestResponseAnalyticsData *directionsMetadata;
@property (readonly, nonatomic) BOOL hasPlacesMetadata;
@property (retain, nonatomic) GEOPDPlacesRequestResponseAnalyticsData *placesMetadata;

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
- (int)StringAsServiceMetadataType:(id)a0;
- (id)serviceMetadataTypeAsString:(int)a0;

@end
