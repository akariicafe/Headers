@interface AWDMailComposeAttachmentReport : PBCodable <NSCopying> {
    struct { unsigned char drawingInsertCount : 1; unsigned char drawingSentCount : 1; unsigned char timestamp : 1; unsigned char messageSent : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDrawingInsertCount;
@property (nonatomic) long long drawingInsertCount;
@property (nonatomic) BOOL hasDrawingSentCount;
@property (nonatomic) long long drawingSentCount;
@property (nonatomic) BOOL hasMessageSent;
@property (nonatomic) BOOL messageSent;

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
