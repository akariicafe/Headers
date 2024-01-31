@class DESBinary64Transport, DESBfloat16Transport, DESBinary32Transport;

@interface DESDataTransport : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasBinary64;
@property (retain, nonatomic) DESBinary64Transport *binary64;
@property (readonly, nonatomic) BOOL hasBinary32;
@property (retain, nonatomic) DESBinary32Transport *binary32;
@property (readonly, nonatomic) BOOL hasBfloat16;
@property (retain, nonatomic) DESBfloat16Transport *bfloat16;

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

@end
