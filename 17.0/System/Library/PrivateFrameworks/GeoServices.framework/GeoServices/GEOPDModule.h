@class PBDataReader, NSString, GEOPDModuleOptions, PBUnknownFields;

@interface GEOPDModule : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_moduleDebugDescription;
    GEOPDModuleOptions *_options;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _moduleConfigurationIndex;
    int _type;
    struct { unsigned char has_moduleConfigurationIndex : 1; unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_moduleDebugDescription : 1; unsigned char read_options : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasOptions;
@property (retain, nonatomic) GEOPDModuleOptions *options;
@property (readonly, nonatomic) BOOL hasModuleDebugDescription;
@property (retain, nonatomic) NSString *moduleDebugDescription;
@property (nonatomic) BOOL hasModuleConfigurationIndex;
@property (nonatomic) int moduleConfigurationIndex;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void)clearUnknownFields:(BOOL)a0;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;

@end
