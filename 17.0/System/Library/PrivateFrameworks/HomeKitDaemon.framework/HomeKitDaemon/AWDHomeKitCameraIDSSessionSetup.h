@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying> {
    struct { unsigned char idsSessionInvitationReceived : 1; unsigned char idsSessionInvitationSent : 1; unsigned char idsSessionStartedOnReceiver : 1; unsigned char idsSessionStartedOnResident : 1; } _has;
}

@property (nonatomic) BOOL hasIdsSessionInvitationSent;
@property (nonatomic) unsigned int idsSessionInvitationSent;
@property (nonatomic) BOOL hasIdsSessionInvitationReceived;
@property (nonatomic) unsigned int idsSessionInvitationReceived;
@property (nonatomic) BOOL hasIdsSessionStartedOnResident;
@property (nonatomic) unsigned int idsSessionStartedOnResident;
@property (nonatomic) BOOL hasIdsSessionStartedOnReceiver;
@property (nonatomic) unsigned int idsSessionStartedOnReceiver;

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
