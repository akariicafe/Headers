@class GEOPDFeatureBuilding, PBDataReader, GEOPDFeaturePOI, GEOPDFeatureVenue, PBUnknownFields;

@interface GEOPDVenueFeatureValue : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDFeatureBuilding *_featureBuilding;
    GEOPDFeaturePOI *_featurePoi;
    GEOPDFeatureVenue *_featureVenue;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_featureBuilding : 1; unsigned char read_featurePoi : 1; unsigned char read_featureVenue : 1; unsigned char wrote_anyField : 1; } _flags;
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
