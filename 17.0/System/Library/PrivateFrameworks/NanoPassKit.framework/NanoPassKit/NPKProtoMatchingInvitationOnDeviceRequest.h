@class NSData;

@interface NPKProtoMatchingInvitationOnDeviceRequest : PBRequest <NSCopying> {
    struct { unsigned char timeoutInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasInvitationData;
@property (retain, nonatomic) NSData *invitationData;
@property (nonatomic) BOOL hasTimeoutInSeconds;
@property (nonatomic) unsigned long long timeoutInSeconds;

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
