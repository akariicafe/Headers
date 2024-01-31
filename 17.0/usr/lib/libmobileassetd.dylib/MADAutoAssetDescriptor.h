@class NSString, NSArray, NSDictionary, MAAutoAssetSelector, NSError;

@interface MADAutoAssetDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) NSString *assetId;
@property (readonly, nonatomic) BOOL isMAAutoAsset;
@property (nonatomic) BOOL foundByLookupWithoutAssetVersion;
@property (nonatomic) BOOL foundAsPreInstalled;
@property (nonatomic) BOOL preSoftwareUpdateAssetStaging;
@property (nonatomic) BOOL isPatch;
@property (readonly, retain, nonatomic) NSString *assetSpecifier;
@property (readonly, retain, nonatomic) NSString *assetVersion;
@property (readonly, retain, nonatomic) NSString *assetFormat;
@property (readonly, retain, nonatomic) NSString *build;
@property (readonly, retain, nonatomic) NSString *minOSVersion;
@property (readonly, retain, nonatomic) NSString *maxOSVersion;
@property (readonly, retain, nonatomic) NSArray *prerequisiteAssetBuilds;
@property (readonly, retain, nonatomic) NSDictionary *metadata;
@property (nonatomic) BOOL isOnFilesystem;
@property (nonatomic) BOOL neverBeenLocked;
@property (nonatomic) BOOL downloadUserInitiated;
@property (nonatomic) long long downloadedNetworkBytes;
@property (nonatomic) long long downloadedFilesystemBytes;
@property (retain, nonatomic) MAAutoAssetSelector *patchedFromBaseSelector;
@property (nonatomic) long long patchedFromBaseFilesystemBytes;
@property (nonatomic) BOOL patchingAttempted;
@property (nonatomic) BOOL stagedPriorToAvailable;
@property (retain) NSString *stagedFromOSVersion;
@property (retain) NSString *stagedFromBuildVersion;
@property (retain, nonatomic) NSError *patchingAttemptError;

+ (long long)totalFilesystemSpaceForAutoAssetDescriptors:(id)a0;
+ (BOOL)doesMetatadaIndicateEmptyEntry:(id)a0;
+ (BOOL)isAutoAssetMetadata:(id)a0;

- (id)initForAssetType:(id)a0 fromMetadata:(id)a1 invalidReasons:(id *)a2;
- (BOOL)isEqualSelector:(id)a0;
- (BOOL)isBlankEntry;
- (id)summary;
- (id)initForAssetType:(id)a0 fromMetadata:(id)a1 fromBaseDescriptor:(id)a2 invalidReasons:(id *)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initBlankEntry;
- (id)newSummaryWithoutSelector;
- (id)initWithCoder:(id)a0;

@end
