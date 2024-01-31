@class NSString;

@interface AWDHomeKitCameraRecordingBulkSendDataRead : PBCodable <NSCopying> {
    struct { unsigned char bitRate : 1; unsigned char bytesRead : 1; unsigned char chunkSequenceNumber : 1; unsigned char duration : 1; unsigned char iFrameInterval : 1; unsigned char imageHeight : 1; unsigned char imageWidth : 1; unsigned char sequenceNumber : 1; unsigned char timestamp : 1; unsigned char status : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (retain, nonatomic) NSString *cameraUUID;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) BOOL hasChunkSequenceNumber;
@property (nonatomic) unsigned long long chunkSequenceNumber;
@property (nonatomic) BOOL hasBytesRead;
@property (nonatomic) unsigned long long bytesRead;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL hasBitRate;
@property (nonatomic) unsigned long long bitRate;
@property (nonatomic) BOOL hasImageHeight;
@property (nonatomic) unsigned long long imageHeight;
@property (nonatomic) BOOL hasImageWidth;
@property (nonatomic) unsigned long long imageWidth;
@property (nonatomic) BOOL hasIFrameInterval;
@property (nonatomic) unsigned long long iFrameInterval;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
