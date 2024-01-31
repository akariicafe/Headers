@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addBundleIds:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (unsigned long long)bundleIdsCount;
- (void)clearBundleIds;

@end
