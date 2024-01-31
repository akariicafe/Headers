@class NSMutableArray;

@interface NRPBMutableDeviceCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *pairingIDs;
@property (retain, nonatomic) NSMutableArray *devices;

+ (Class)devicesType;
+ (Class)pairingIDsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)pairingIDsCount;
- (void)addDevices:(id)a0;
- (void)clearDevices;
- (unsigned long long)devicesCount;
- (id)description;
- (id)pairingIDsAtIndex:(unsigned long long)a0;
- (id)devicesAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addPairingIDs:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearPairingIDs;

@end
