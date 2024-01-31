@interface AWDHomeKitCameraSnapshotIDSTransfer : PBCodable <NSCopying> {
    struct { unsigned char receivedImage : 1; unsigned char sentImage : 1; } _has;
}

@property (nonatomic) BOOL hasSentImage;
@property (nonatomic) unsigned int sentImage;
@property (nonatomic) BOOL hasReceivedImage;
@property (nonatomic) unsigned int receivedImage;

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
