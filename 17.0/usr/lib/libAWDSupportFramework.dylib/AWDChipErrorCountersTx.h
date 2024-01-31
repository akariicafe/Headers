@interface AWDChipErrorCountersTx : PBCodable <NSCopying> {
    struct { unsigned char txchanrej : 1; unsigned char txexptime : 1; unsigned char txphycrs : 1; unsigned char txphyerr : 1; unsigned char txuflo : 1; } _has;
}

@property (nonatomic) BOOL hasTxuflo;
@property (nonatomic) unsigned long long txuflo;
@property (nonatomic) BOOL hasTxphyerr;
@property (nonatomic) unsigned long long txphyerr;
@property (nonatomic) BOOL hasTxphycrs;
@property (nonatomic) unsigned long long txphycrs;
@property (nonatomic) BOOL hasTxchanrej;
@property (nonatomic) unsigned long long txchanrej;
@property (nonatomic) BOOL hasTxexptime;
@property (nonatomic) unsigned long long txexptime;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
