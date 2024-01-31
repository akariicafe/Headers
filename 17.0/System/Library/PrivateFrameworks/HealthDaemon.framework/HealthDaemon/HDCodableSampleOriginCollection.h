@class NSMutableArray;

@interface HDCodableSampleOriginCollection : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *devices;
@property (retain, nonatomic) NSMutableArray *contributors;

+ (Class)deviceType;
+ (Class)contributorType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearDevices;
- (unsigned long long)devicesCount;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (void)addDevice:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)deviceAtIndex:(unsigned long long)a0;
- (void)addContributor:(id)a0;
- (void)clearContributors;
- (id)contributorAtIndex:(unsigned long long)a0;
- (unsigned long long)contributorsCount;

@end
