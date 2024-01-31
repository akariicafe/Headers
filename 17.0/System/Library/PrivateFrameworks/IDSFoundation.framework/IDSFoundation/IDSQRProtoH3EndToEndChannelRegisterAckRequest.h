@class NSData;

@interface IDSQRProtoH3EndToEndChannelRegisterAckRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *e2eChannelUuid;
@property (nonatomic) BOOL accept;

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
