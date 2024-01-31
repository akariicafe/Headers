@class NSString;

@interface AWDIDSLocalDeliverySocketOpened : PBCodable <NSCopying> {
    struct { unsigned char isToDefaultPairedDevice : 1; unsigned char openError : 1; unsigned char priority : 1; unsigned char socketError : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasService;
@property (retain, nonatomic) NSString *service;
@property (nonatomic) BOOL hasIsToDefaultPairedDevice;
@property (nonatomic) unsigned long long isToDefaultPairedDevice;
@property (nonatomic) BOOL hasOpenError;
@property (nonatomic) unsigned long long openError;
@property (nonatomic) BOOL hasSocketError;
@property (nonatomic) unsigned long long socketError;
@property (nonatomic) BOOL hasPriority;
@property (nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL hasStreamName;
@property (retain, nonatomic) NSString *streamName;
@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;

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
