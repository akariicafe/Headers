@class NSData;

@interface IDSQRProtoInfoRequest : PBRequest <NSCopying>

@property (nonatomic) unsigned int infoFlags;
@property (readonly, nonatomic) BOOL hasAccessToken;
@property (retain, nonatomic) NSData *accessToken;

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
