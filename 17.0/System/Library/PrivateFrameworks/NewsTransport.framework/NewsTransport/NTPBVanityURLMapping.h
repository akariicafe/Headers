@class NSMutableArray;

@interface NTPBVanityURLMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *paths;

+ (Class)pathsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)pathsCount;
- (id)description;
- (void).cxx_destruct;
- (void)addPaths:(id)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)pathsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)clearPaths;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
