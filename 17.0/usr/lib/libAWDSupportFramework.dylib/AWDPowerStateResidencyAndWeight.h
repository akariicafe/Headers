@interface AWDPowerStateResidencyAndWeight : PBCodable <NSCopying> {
    struct { unsigned char residency : 1; unsigned char weight : 1; } _has;
}

@property (nonatomic) BOOL hasResidency;
@property (nonatomic) unsigned int residency;
@property (nonatomic) BOOL hasWeight;
@property (nonatomic) unsigned int weight;

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
