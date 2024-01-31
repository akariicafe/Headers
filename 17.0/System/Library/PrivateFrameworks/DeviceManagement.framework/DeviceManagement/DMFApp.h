@class NSString, NSArray, NSDictionary, DMFAppManagementInformation, NSNumber;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *staticUsage;
@property (copy, nonatomic) NSNumber *dynamicUsage;
@property (copy, nonatomic) NSNumber *onDemandResourcesUsage;
@property (copy, nonatomic) NSNumber *sharedUsage;
@property (nonatomic) unsigned long long installationState;
@property (nonatomic) BOOL isPlaceholder;
@property (nonatomic) BOOL isRestricted;
@property (nonatomic) BOOL isBlocked;
@property (nonatomic) BOOL isUserBasedVPP;
@property (nonatomic) BOOL isDeviceBasedVPP;
@property (nonatomic) BOOL isLicenseExpired;
@property (nonatomic) BOOL isLicenseRevoked;
@property (nonatomic) BOOL isUPP;
@property (nonatomic) BOOL isValidated;
@property (nonatomic) BOOL isAppClip;
@property (nonatomic) BOOL isAppStoreVendable;
@property (nonatomic) BOOL isBetaApp;
@property (nonatomic) BOOL isAdHocCodeSigned;
@property (nonatomic) BOOL hasUpdateAvailable;
@property (copy, nonatomic) NSString *VPNUUIDString;
@property (copy, nonatomic) NSString *cellularSliceUUIDString;
@property (copy, nonatomic) NSString *contentFilterUUIDString;
@property (copy, nonatomic) NSString *DNSProxyUUIDString;
@property (copy, nonatomic) NSString *relayUUIDString;
@property (copy, nonatomic) NSArray *associatedDomains;
@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;
@property (copy, nonatomic) NSNumber *removable;
@property (copy, nonatomic) NSNumber *tapToPayScreenLock;
@property (copy, nonatomic) NSDictionary *configuration;
@property (copy, nonatomic) NSDictionary *feedback;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) DMFAppManagementInformation *managementInformation;

+ (id)stringForInstallationState:(unsigned long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_stringForType:(unsigned long long)a0;

@end
