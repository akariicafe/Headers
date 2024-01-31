@class PBUnknownFields;

@interface GEOOfflineMetadata : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    unsigned long long _dataVersion;
    unsigned int _regulatoryRegionId;
    struct { unsigned char has_dataVersion : 1; unsigned char has_regulatoryRegionId : 1; } _flags;
}

@property (nonatomic) BOOL hasDataVersion;
@property (nonatomic) unsigned long long dataVersion;
@property (nonatomic) BOOL hasRegulatoryRegionId;
@property (nonatomic) unsigned int regulatoryRegionId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
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
