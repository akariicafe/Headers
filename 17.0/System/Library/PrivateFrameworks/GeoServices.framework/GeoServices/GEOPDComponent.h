@class GEOPDSource, GEOPDAttribution, NSMutableArray, PBUnknownFields;

@interface GEOPDComponent : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    NSMutableArray *_commingledAttributions;
    GEOPDSource *_source;
    double _timestampFirstSeen;
    NSMutableArray *_values;
    NSMutableArray *_versionDomains;
    int _cacheControl;
    int _componentId;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    int _valuesAvailable;
    unsigned int _version;
    struct { unsigned char has_timestampFirstSeen : 1; unsigned char has_cacheControl : 1; unsigned char has_componentId : 1; unsigned char has_startIndex : 1; unsigned char has_status : 1; unsigned char has_ttl : 1; unsigned char has_type : 1; unsigned char has_valuesAvailable : 1; unsigned char has_version : 1; } _flags;
}

@property (nonatomic) BOOL hasTimestampFirstSeen;
@property (nonatomic) double timestampFirstSeen;

- (BOOL)statusCodeIsValid;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
