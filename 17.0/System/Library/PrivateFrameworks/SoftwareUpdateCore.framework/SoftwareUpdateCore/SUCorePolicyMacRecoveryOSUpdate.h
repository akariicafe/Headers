@class NSString;

@interface SUCorePolicyMacRecoveryOSUpdate : SUCorePolicy

@property (retain, nonatomic) NSString *installedSFRRestoreVersion;
@property (retain, nonatomic) NSString *installedRecoveryOSBuildVersion;
@property (retain, nonatomic) NSString *installedRecoveryOSProductVersion;
@property (retain, nonatomic) NSString *installedRecoveryOSRestoreVersion;
@property (retain, nonatomic) NSString *installedRecoveryOSReleaseType;

+ (BOOL)supportsSecureCoding;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)selectSoftwareUpdatePrimaryAsset:(id *)a0 secondaryAsset:(id *)a1 fromAssetQuery:(id)a2;
- (id)constructMASoftwareUpdateCatalogDownloadOptionsWithUUID:(id)a0 assetAudience:(id)a1;
- (id)constructSoftwareUpdateMAAssetQuery;
- (id)constructSoftwareUpdateMAAssetQueryWithPurpose:(id)a0;
- (id)initWithAssetType:(id)a0 targetRestoreVersion:(id)a1 usingPolicies:(long long)a2 usingExtensions:(id)a3;

@end
