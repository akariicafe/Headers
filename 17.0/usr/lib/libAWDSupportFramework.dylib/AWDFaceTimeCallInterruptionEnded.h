@class NSString;

@interface AWDFaceTimeCallInterruptionEnded : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char interruptionDuration : 1; unsigned char isAudioResumed : 1; unsigned char isVideo : 1; unsigned char isVideoResumed : 1; unsigned char linkQuality : 1; unsigned char onLockScreen : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasGuid;
@property (retain, nonatomic) NSString *guid;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasInterruptionDuration;
@property (nonatomic) unsigned int interruptionDuration;
@property (nonatomic) BOOL hasIsVideoResumed;
@property (nonatomic) unsigned int isVideoResumed;
@property (nonatomic) BOOL hasIsAudioResumed;
@property (nonatomic) unsigned int isAudioResumed;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasIsVideo;
@property (nonatomic) unsigned int isVideo;
@property (nonatomic) BOOL hasOnLockScreen;
@property (nonatomic) unsigned int onLockScreen;

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
