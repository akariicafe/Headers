@class NSString, NSData, NSDate;

@interface UMLUser : NSObject

@property (nonatomic) int uid;
@property (nonatomic) int gid;
@property (nonatomic) long long apnsID;
@property (copy, nonatomic) NSString *userUUID;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *userLanguauge;
@property (copy, nonatomic) NSString *fileInfoPath;
@property (copy, nonatomic) NSString *libInfoPath;
@property (copy, nonatomic) NSString *diskNode;
@property (copy, nonatomic) NSString *volumeUUID;
@property (copy, nonatomic) NSString *homeDirPath;
@property (copy, nonatomic) NSData *opaqueData;
@property (copy, nonatomic) NSData *keybagOpaqueData;
@property (nonatomic) BOOL needsMount;
@property (nonatomic) BOOL isForeground;
@property (nonatomic) BOOL isDirty;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL isPrimaryUser;
@property (nonatomic) BOOL isAdminUser;
@property (copy, nonatomic) NSDate *lastLoginStart;
@property (copy, nonatomic) NSDate *lastLoginEnd;
@property (nonatomic) BOOL isDisabledUser;
@property (nonatomic) BOOL isLoginUser;
@property (nonatomic) BOOL isAuditor;
@property (nonatomic) BOOL hasSyncBag;
@property (nonatomic) int gracePeriod;
@property (copy, nonatomic) NSDate *firstLoginStart;
@property (copy, nonatomic) NSDate *firstLoginEnd;
@property (copy, nonatomic) NSDate *cachedLoginStart;
@property (copy, nonatomic) NSDate *cachedLoginEnd;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *dataValue;

+ (id)userFromManifestDictionary:(id)a0;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isValidClassTypeinDictionary:(id)a0 withKey:(id)a1 withType:(Class)a2;
- (id)userManifestDictionary;

@end
