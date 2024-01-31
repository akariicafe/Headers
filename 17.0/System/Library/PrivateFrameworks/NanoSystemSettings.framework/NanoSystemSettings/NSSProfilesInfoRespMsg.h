@class NSData, NSSProfilesInfoRespMsgProfileInfo, NSMutableArray;

@interface NSSProfilesInfoRespMsg : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMdmProfile;
@property (retain, nonatomic) NSSProfilesInfoRespMsgProfileInfo *mdmProfile;
@property (retain, nonatomic) NSMutableArray *configProfiles;
@property (readonly, nonatomic) BOOL hasManagedAppsData;
@property (retain, nonatomic) NSData *managedAppsData;
@property (readonly, nonatomic) BOOL hasRmAccountData;
@property (retain, nonatomic) NSData *rmAccountData;

+ (Class)configProfileType;

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
- (void)addConfigProfile:(id)a0;
- (void)clearConfigProfiles;
- (id)configProfileAtIndex:(unsigned long long)a0;
- (unsigned long long)configProfilesCount;

@end
