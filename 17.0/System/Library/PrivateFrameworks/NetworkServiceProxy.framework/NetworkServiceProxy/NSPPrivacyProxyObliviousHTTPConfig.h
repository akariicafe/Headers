@class NSData, NSMutableArray;

@interface NSPPrivacyProxyObliviousHTTPConfig : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *obliviousTargets;
@property (retain, nonatomic) NSData *obliviousHTTPConfig;

+ (Class)obliviousTargetsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)clearObliviousTargets;
- (id)description;
- (id)obliviousTargetsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)obliviousTargetsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObliviousTargets:(id)a0;

@end
