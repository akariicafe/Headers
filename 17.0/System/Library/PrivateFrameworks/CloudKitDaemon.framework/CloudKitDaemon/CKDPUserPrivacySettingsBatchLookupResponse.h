@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *containerPrivacySettings;

+ (Class)containerPrivacySettingsType;

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
- (void)addContainerPrivacySettings:(id)a0;
- (void)clearContainerPrivacySettings;
- (id)containerPrivacySettingsAtIndex:(unsigned long long)a0;
- (unsigned long long)containerPrivacySettingsCount;

@end
