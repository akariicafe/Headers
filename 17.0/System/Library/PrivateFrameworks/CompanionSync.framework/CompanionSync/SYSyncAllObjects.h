@class SYMessageHeader, NSString, NSMutableArray;

@interface SYSyncAllObjects : PBCodable <NSCopying>

@property (retain, nonatomic) SYMessageHeader *header;
@property (retain, nonatomic) NSString *syncID;
@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSMutableArray *allObjects;

+ (Class)allObjectsType;

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
- (unsigned long long)allObjectsCount;
- (void)clearAllObjects;
- (void)addAllObjects:(id)a0;
- (id)allObjectsAtIndex:(unsigned long long)a0;

@end
