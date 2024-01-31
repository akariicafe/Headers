@class NSMutableArray;

@interface HDCodableStateSyncCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sampleCollections;
@property (retain, nonatomic) NSMutableArray *deletedSampleCollections;

+ (Class)deletedSampleCollectionsType;
+ (Class)sampleCollectionsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addDeletedSampleCollections:(id)a0;
- (void)addSampleCollections:(id)a0;
- (void)clearDeletedSampleCollections;
- (void)clearSampleCollections;
- (id)deletedSampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)deletedSampleCollectionsCount;
- (id)sampleCollectionsAtIndex:(unsigned long long)a0;
- (unsigned long long)sampleCollectionsCount;

@end
