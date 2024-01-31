@class NSString;

@interface AWDIMessageCloudKitValidatePurgeableAttachment : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char attachmentSize : 1; unsigned char connectionType : 1; unsigned char linkQuality : 1; unsigned char operationalErrorCode : 1; unsigned char validatedAttachment : 1; unsigned char validationErrorCode : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasValidatedAttachment;
@property (nonatomic) unsigned int validatedAttachment;
@property (nonatomic) BOOL hasAttachmentSize;
@property (nonatomic) unsigned int attachmentSize;
@property (readonly, nonatomic) BOOL hasOperationalErrorDomain;
@property (retain, nonatomic) NSString *operationalErrorDomain;
@property (nonatomic) BOOL hasOperationalErrorCode;
@property (nonatomic) unsigned int operationalErrorCode;
@property (readonly, nonatomic) BOOL hasValidationErrorDomain;
@property (retain, nonatomic) NSString *validationErrorDomain;
@property (nonatomic) BOOL hasValidationErrorCode;
@property (nonatomic) unsigned int validationErrorCode;
@property (nonatomic) BOOL hasLinkQuality;
@property (nonatomic) int linkQuality;
@property (nonatomic) BOOL hasConnectionType;
@property (nonatomic) unsigned int connectionType;

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
