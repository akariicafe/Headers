@class NSString;

@interface AWDIMessageNicknamePublished : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char connectionType : 1; unsigned char hasAvatar : 1; unsigned char linkQuality : 1; unsigned char privateOperationalErrorCode : 1; unsigned char privateSuccess : 1; unsigned char publicOperationalErrorCode : 1; unsigned char publicSuccess : 1; unsigned char updated : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasUpdated;
@property (nonatomic) unsigned int updated;
@property (nonatomic) BOOL hasHasAvatar;
@property (nonatomic) unsigned int hasAvatar;
@property (nonatomic) BOOL hasPublicSuccess;
@property (nonatomic) unsigned int publicSuccess;
@property (nonatomic) BOOL hasPrivateSuccess;
@property (nonatomic) unsigned int privateSuccess;
@property (readonly, nonatomic) BOOL hasPublicOperationalErrorDomain;
@property (retain, nonatomic) NSString *publicOperationalErrorDomain;
@property (nonatomic) BOOL hasPublicOperationalErrorCode;
@property (nonatomic) unsigned int publicOperationalErrorCode;
@property (readonly, nonatomic) BOOL hasPrivateOperationalErrorDomain;
@property (retain, nonatomic) NSString *privateOperationalErrorDomain;
@property (nonatomic) BOOL hasPrivateOperationalErrorCode;
@property (nonatomic) unsigned int privateOperationalErrorCode;
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
