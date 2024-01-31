@interface AWDIDSSocketPairConnectionTCPInfo : PBCodable <NSCopying> {
    struct { unsigned char bandwidth : 1; unsigned char currentRTT : 1; unsigned char timestamp : 1; unsigned char linkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned int linkType;
@property (nonatomic) BOOL hasCurrentRTT;
@property (nonatomic) unsigned long long currentRTT;
@property (nonatomic) BOOL hasBandwidth;
@property (nonatomic) unsigned long long bandwidth;

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
