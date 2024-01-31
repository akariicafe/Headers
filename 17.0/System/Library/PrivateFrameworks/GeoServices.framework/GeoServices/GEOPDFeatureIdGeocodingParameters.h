@class PBUnknownFields, GEOLatLng, PBDataReader;

@interface GEOPDFeatureIdGeocodingParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    struct { unsigned long long *list; unsigned long long count; unsigned long long size; } _encryptedFeatureIds;
    unsigned long long _featureId;
    GEOLatLng *_location;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _formattedAddressType;
    struct { unsigned char has_featureId : 1; unsigned char has_formattedAddressType : 1; unsigned char read_unknownFields : 1; unsigned char read_encryptedFeatureIds : 1; unsigned char read_location : 1; unsigned char wrote_anyField : 1; } _flags;
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
