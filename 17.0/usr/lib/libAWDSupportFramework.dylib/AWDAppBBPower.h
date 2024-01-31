@class NSString;

@interface AWDAppBBPower : PBCodable <NSCopying> {
    struct { unsigned char powerMicroWatt : 1; unsigned char rAT : 1; } _has;
}

@property (nonatomic) BOOL hasRAT;
@property (nonatomic) int rAT;
@property (readonly, nonatomic) BOOL hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasPowerMicroWatt;
@property (nonatomic) unsigned int powerMicroWatt;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsRAT:(id)a0;
- (id)rATAsString:(int)a0;

@end
