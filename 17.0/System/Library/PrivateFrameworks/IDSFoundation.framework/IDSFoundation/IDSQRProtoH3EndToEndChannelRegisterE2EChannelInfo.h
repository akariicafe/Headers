@class NSData;

@interface IDSQRProtoH3EndToEndChannelRegisterE2EChannelInfo : PBCodable <NSCopying>

@property (retain, nonatomic) NSData *quicClientConnectionId;
@property (retain, nonatomic) NSData *quicServerConnectionId;
@property (nonatomic) unsigned int quicClientLinkId;
@property (nonatomic) unsigned int quicServerLinkId;

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
