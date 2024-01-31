@class NSString;

@interface AWDIMessageCloudKitAttachmentDownloadFailed : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char errorCode : 1; unsigned char linkQuality : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasMessageGuid;
@property (retain, nonatomic) NSString *messageGuid;
@property (readonly, nonatomic) BOOL hasAttachmentGuid;
@property (retain, nonatomic) NSString *attachmentGuid;
@property (readonly, nonatomic) BOOL hasErrorDomain;
@property (retain, nonatomic) NSString *errorDomain;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;
@property (nonatomic) BOOL hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;

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
