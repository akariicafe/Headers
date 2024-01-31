@class NSData;

@interface NPKProtoAcceptSubcredentialInvitationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasInvitationData;
@property (retain, nonatomic) NSData *invitationData;
@property (readonly, nonatomic) BOOL hasMetadataData;
@property (retain, nonatomic) NSData *metadataData;

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
