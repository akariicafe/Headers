@class NSData;

@interface NPKProtoCreateShareForPartialShareInvitationRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *inviteData;
@property (readonly, nonatomic) BOOL hasAuthorizationData;
@property (retain, nonatomic) NSData *authorizationData;

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
