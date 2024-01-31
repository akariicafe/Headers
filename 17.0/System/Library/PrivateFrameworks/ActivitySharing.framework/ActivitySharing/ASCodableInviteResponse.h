@class NSString, ASCodableShareLocations, ASCodableActivityDataPreview;

@interface ASCodableInviteResponse : PBCodable <NSCopying> {
    struct { unsigned char inviteeVersion : 1; unsigned char responseCode : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasHandshakeToken;
@property (retain, nonatomic) NSString *handshakeToken;
@property (nonatomic) BOOL hasResponseCode;
@property (nonatomic) int responseCode;
@property (readonly, nonatomic) BOOL hasInviteeCloudKitAddress;
@property (retain, nonatomic) NSString *inviteeCloudKitAddress;
@property (readonly, nonatomic) BOOL hasInviteeShareLocations;
@property (retain, nonatomic) ASCodableShareLocations *inviteeShareLocations;
@property (readonly, nonatomic) BOOL hasInviteeBuildNumber;
@property (retain, nonatomic) NSString *inviteeBuildNumber;
@property (nonatomic) BOOL hasInviteeVersion;
@property (nonatomic) unsigned int inviteeVersion;
@property (readonly, nonatomic) BOOL hasActivityDataPreview;
@property (retain, nonatomic) ASCodableActivityDataPreview *activityDataPreview;

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
