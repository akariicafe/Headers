@class SYMessageHeader, NSString, NSMutableArray;

@interface SYBatchSyncChunk : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned int chunkIndex;
@property (retain, nonatomic) NSMutableArray *objects;

+ (Class)objectsType;

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
- (void)addObjects:(id)a0;
- (id)objectsAtIndex:(unsigned long long)a0;
- (void)clearObjects;
- (unsigned long long)objectsCount;

@end
