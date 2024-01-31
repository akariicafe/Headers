@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *collections;

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)addCollections:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)collectionsCount;
- (id)description;
- (void).cxx_destruct;
- (void)clearCollections;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)sharedCollectionsDictionary;

@end
