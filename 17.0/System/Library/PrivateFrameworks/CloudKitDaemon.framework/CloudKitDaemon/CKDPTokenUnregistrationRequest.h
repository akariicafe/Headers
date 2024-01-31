@class CKDPTokenRegistrationBody;

@interface CKDPTokenUnregistrationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasTokenRegistrationBody;
@property (retain, nonatomic) CKDPTokenRegistrationBody *tokenRegistrationBody;

+ (id)options;

- (unsigned long long)hash;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
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
