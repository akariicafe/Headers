@class NPKProtoStandaloneResponseHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentPassListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NPKProtoStandaloneResponseHeader *responseHeader;
@property (retain, nonatomic) NSMutableArray *paymentPasses;

+ (Class)paymentPassesType;

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
- (void)addPaymentPasses:(id)a0;
- (void)clearPaymentPasses;
- (id)paymentPassesAtIndex:(unsigned long long)a0;
- (unsigned long long)paymentPassesCount;

@end
