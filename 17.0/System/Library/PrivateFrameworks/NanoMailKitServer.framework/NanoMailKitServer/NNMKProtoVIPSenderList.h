@class NSMutableArray;

@interface NNMKProtoVIPSenderList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *vips;

+ (id)protoVIPList:(id)a0;
+ (Class)vipsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)vipList;
- (void)addVips:(id)a0;
- (void)clearVips;
- (id)vipsAtIndex:(unsigned long long)a0;
- (unsigned long long)vipsCount;

@end
