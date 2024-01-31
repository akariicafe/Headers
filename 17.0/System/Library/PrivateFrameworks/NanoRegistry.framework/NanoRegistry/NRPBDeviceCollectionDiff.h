@class NSMutableArray;

@interface NRPBDeviceCollectionDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)diffsType;
+ (Class)pairingIDsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (id)description;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addPairingIDs:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPairingIDs;
- (void)clearDiffs;
- (void)addDiffs:(id)a0;
- (id)diffsAtIndex:(unsigned long long)a0;
- (unsigned long long)diffsCount;

@end
