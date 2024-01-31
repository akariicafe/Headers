@class NSPPrivacyProxyPolicy;

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>

@property (nonatomic) int tier;
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)tierAsString:(int)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsTier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
