@class CKDPUserPrivacySettings, NSMutableArray;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasUserPrivacySettings;
@property (retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings;
@property (retain, nonatomic) NSMutableArray *applicationBundles;

+ (Class)applicationBundleType;

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
- (void)addApplicationBundle:(id)a0;
- (id)applicationBundleAtIndex:(unsigned long long)a0;
- (unsigned long long)applicationBundlesCount;
- (void)clearApplicationBundles;

@end
