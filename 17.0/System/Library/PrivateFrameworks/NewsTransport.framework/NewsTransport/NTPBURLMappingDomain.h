@class NSString, NSMutableArray;

@interface NTPBURLMappingDomain : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSMutableArray *paths;
@property (nonatomic) double averageSafariVisitsPerDay;

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
