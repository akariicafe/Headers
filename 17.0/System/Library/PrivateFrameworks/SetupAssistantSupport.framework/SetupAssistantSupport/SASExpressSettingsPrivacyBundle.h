@class NSString;

@interface SASExpressSettingsPrivacyBundle : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long contentVersion;

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
