@class NSString, NSData;

@interface NPKProtoUpdateShareForPassIdentifierRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSString *passIdentifier;
@property (retain, nonatomic) NSData *shareData;
@property (readonly, nonatomic) BOOL hasAuthorization;
@property (retain, nonatomic) NSData *authorization;

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
