@class NGMPBP256Key, NSMutableArray;

@interface NGMPBFullDeviceIdentity : PBCodable <NSCopying>

@property (retain, nonatomic) NGMPBP256Key *signingKey;
@property (retain, nonatomic) NSMutableArray *prekeys;

+ (Class)prekeysType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (id)prekeysAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)addPrekeys:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)clearPrekeys;
- (unsigned long long)prekeysCount;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
