@interface GEOVLBuild : PBCodable <NSCopying> {
    unsigned long long _identifier;
    unsigned int _dataFormatVersion;
    unsigned int _dataOutputVersion;
    unsigned int _routingKey;
    struct { unsigned char has_identifier : 1; unsigned char has_dataFormatVersion : 1; unsigned char has_dataOutputVersion : 1; unsigned char has_routingKey : 1; } _flags;
}

@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic) BOOL hasDataOutputVersion;
@property (nonatomic) unsigned int dataOutputVersion;
@property (nonatomic) BOOL hasDataFormatVersion;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) BOOL hasRoutingKey;
@property (nonatomic) unsigned int routingKey;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
