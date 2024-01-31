@class NSMutableArray;

@interface NRPBMutableDevice : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *properties;

+ (Class)propertiesType;
+ (Class)namesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearNames;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)namesCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearProperties;
- (unsigned long long)propertiesCount;
- (void)addProperties:(id)a0;
- (id)propertiesAtIndex:(unsigned long long)a0;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;

@end
