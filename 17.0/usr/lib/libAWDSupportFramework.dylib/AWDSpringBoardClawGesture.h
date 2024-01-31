@interface AWDSpringBoardClawGesture : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char timestamp : 1; unsigned char didPressLock : 1; unsigned char didPressVolumeDown : 1; unsigned char didPressVolumeUp : 1; unsigned char didTriggerSOS : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDidPressLock;
@property (nonatomic) BOOL didPressLock;
@property (nonatomic) BOOL hasDidPressVolumeUp;
@property (nonatomic) BOOL didPressVolumeUp;
@property (nonatomic) BOOL hasDidPressVolumeDown;
@property (nonatomic) BOOL didPressVolumeDown;
@property (nonatomic) BOOL hasDidTriggerSOS;
@property (nonatomic) BOOL didTriggerSOS;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

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
