@interface CLPCellNeighbor : PBCodable <NSCopying> {
    struct { unsigned char ecn0 : 1; unsigned char psc : 1; unsigned char rscp : 1; unsigned char rssi : 1; unsigned char uarfcn : 1; } _has;
}

@property (nonatomic) BOOL hasUarfcn;
@property (nonatomic) int uarfcn;
@property (nonatomic) BOOL hasPsc;
@property (nonatomic) int psc;
@property (nonatomic) BOOL hasRssi;
@property (nonatomic) int rssi;
@property (nonatomic) BOOL hasEcn0;
@property (nonatomic) int ecn0;
@property (nonatomic) BOOL hasRscp;
@property (nonatomic) int rscp;

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
