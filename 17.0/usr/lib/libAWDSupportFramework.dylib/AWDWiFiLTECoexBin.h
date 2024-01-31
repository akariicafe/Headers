@interface AWDWiFiLTECoexBin : PBCodable <NSCopying> {
    struct { unsigned char ctsnotrxafterrts : 1; unsigned char rxframe : 1; unsigned char rxrtry : 1; unsigned char txassocreq : 1; unsigned char txassocrsp : 1; unsigned char txdeauth : 1; unsigned char txframe : 1; unsigned char txnocts : 1; unsigned char txreassocreq : 1; unsigned char txreassocrsp : 1; unsigned char txretrans : 1; unsigned char txrts : 1; } _has;
}

@property (nonatomic) BOOL hasRxframe;
@property (nonatomic) unsigned long long rxframe;
@property (nonatomic) BOOL hasTxframe;
@property (nonatomic) unsigned long long txframe;
@property (nonatomic) BOOL hasRxrtry;
@property (nonatomic) unsigned long long rxrtry;
@property (nonatomic) BOOL hasTxretrans;
@property (nonatomic) unsigned long long txretrans;
@property (nonatomic) BOOL hasTxnocts;
@property (nonatomic) unsigned long long txnocts;
@property (nonatomic) BOOL hasTxrts;
@property (nonatomic) unsigned long long txrts;
@property (nonatomic) BOOL hasTxdeauth;
@property (nonatomic) unsigned long long txdeauth;
@property (nonatomic) BOOL hasTxassocreq;
@property (nonatomic) unsigned long long txassocreq;
@property (nonatomic) BOOL hasTxassocrsp;
@property (nonatomic) unsigned long long txassocrsp;
@property (nonatomic) BOOL hasTxreassocreq;
@property (nonatomic) unsigned long long txreassocreq;
@property (nonatomic) BOOL hasTxreassocrsp;
@property (nonatomic) unsigned long long txreassocrsp;
@property (nonatomic) BOOL hasCtsnotrxafterrts;
@property (nonatomic) unsigned long long ctsnotrxafterrts;

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
