@interface BLTPBWillSendLightsAndSirensResponse : PBCodable <NSCopying> {
    struct { unsigned char additionalWait : 1; unsigned char willSend : 1; } _has;
}

@property (nonatomic) BOOL hasWillSend;
@property (nonatomic) BOOL willSend;
@property (nonatomic) BOOL hasAdditionalWait;
@property (nonatomic) unsigned int additionalWait;

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
