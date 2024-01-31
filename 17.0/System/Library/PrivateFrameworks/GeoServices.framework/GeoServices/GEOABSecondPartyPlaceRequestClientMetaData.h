@class PBUnknownFields, PBDataReader, GEOPDABClientDatasetMetadata, NSMutableArray;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_clientConfigs;
    GEOPDABClientDatasetMetadata *_clientDatasetMetadata;
    NSMutableArray *_serverAbAssignments;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_clientConfigs : 1; unsigned char read_clientDatasetMetadata : 1; unsigned char read_serverAbAssignments : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *serverAbAssignments;
@property (retain, nonatomic) NSMutableArray *clientConfigs;
@property (readonly, nonatomic) BOOL hasClientDatasetMetadata;
@property (retain, nonatomic) GEOPDABClientDatasetMetadata *clientDatasetMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)clientConfigType;
+ (Class)serverAbAssignmentType;

- (void)clearServerAbAssignments;
- (id)init;
- (unsigned long long)hash;
- (void)addServerAbAssignment:(id)a0;
- (unsigned long long)clientConfigsCount;
- (BOOL)readFrom:(id)a0;
- (void)clearClientConfigs;
- (void)writeTo:(id)a0;
- (id)clientConfigAtIndex:(unsigned long long)a0;
- (id)initWithData:(id)a0;
- (void)addClientConfig:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (id)serverAbAssignmentAtIndex:(unsigned long long)a0;
- (void)clearUnknownFields:(BOOL)a0;
- (unsigned long long)serverAbAssignmentsCount;
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
