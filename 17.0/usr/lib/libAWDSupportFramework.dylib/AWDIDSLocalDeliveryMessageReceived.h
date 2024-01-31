@class NSString;

@interface AWDIDSLocalDeliveryMessageReceived : PBCodable <NSCopying> {
    struct { unsigned char isFromDefaultPairedDevice : 1; unsigned char linkType : 1; unsigned char messageSize : 1; unsigned char priority : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsFromDefaultPairedDevice;
@property (nonatomic) unsigned long long isFromDefaultPairedDevice;
@property (nonatomic) BOOL hasMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;

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

@end
