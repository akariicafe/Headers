@class PBDataReader, GEOPBOfflineTileMetadata, NSMutableArray, PBUnknownFields;

@interface GEOPBCompanionSubscriptionsInfo : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_loadedSubscriptions;
    GEOPBOfflineTileMetadata *_offlineTileMetadata;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_loadedSubscriptions : 1; unsigned char read_offlineTileMetadata : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (retain, nonatomic) NSMutableArray *loadedSubscriptions;
@property (readonly, nonatomic) BOOL hasOfflineTileMetadata;
@property (retain, nonatomic) GEOPBOfflineTileMetadata *offlineTileMetadata;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;
+ (Class)loadedSubscriptionType;

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
- (void)addLoadedSubscription:(id)a0;
- (void)clearLoadedSubscriptions;
- (id)loadedSubscriptionAtIndex:(unsigned long long)a0;
- (unsigned long long)loadedSubscriptionsCount;

@end
