@class NSData, NSString;

@interface NPKProtoAcceptCarKeyShareForMessageWithActivationCodeRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSData *sharingMessageData;
@property (readonly, nonatomic) BOOL hasActivationCode;
@property (retain, nonatomic) NSString *activationCode;

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
