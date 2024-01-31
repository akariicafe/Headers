@class NSError, NSString, MAAutoAssetSelector, MADAutoAssetDescriptor, MANAutoAssetInfoControl, MAAutoAssetProgress, NSDictionary, MADAutoAssetClientRequest;

@interface MADAutoAssetJobParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) MADAutoAssetClientRequest *clientRequest;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *autoAssetSelector;
@property (readonly, retain, nonatomic) NSString *autoAssetJobID;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, nonatomic) BOOL catalogFromLookupCache;
@property (readonly, retain, nonatomic) NSError *finishedError;
@property (readonly, retain, nonatomic) MAAutoAssetProgress *downloadProgress;
@property (readonly, retain, nonatomic) NSString *assetTargetOSVersion;
@property (readonly, retain, nonatomic) NSString *assetTargetBuildVersion;
@property (readonly, retain, nonatomic) MADAutoAssetDescriptor *autoAssetDescriptor;
@property (readonly, retain, nonatomic) MANAutoAssetInfoControl *controlInformation;

- (id)_summary;
- (void)updateSafeSummary;
- (id)initForCurrentJobID:(id)a0 withProgress:(id)a1;
- (id)initWithSafeSummary:(id)a0;
- (id)initWithControlInformation:(id)a0;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withClientRequest:(id)a2 withAutoAssetSelector:(id)a3 withAutoAssetJobID:(id)a4 withAutoAssetCatalog:(id)a5 whereCatalogFromLookupCache:(BOOL)a6 withFinishedError:(id)a7 withDownloadProgress:(id)a8 withAssetTargetOSVersion:(id)a9 withAssetTargetBuildVersion:(id)a10 withAutoAssetDescriptor:(id)a11 withControlInformation:(id)a12;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDescriptor:(id)a0 withControlInformation:(id)a1;
- (id)description;
- (id)initWithAssetTargetOSVersion:(id)a0 withAssetTargetBuildVersion:(id)a1 withControlInformation:(id)a2;
- (void).cxx_destruct;
- (id)initWithSelector:(id)a0 withControlInformation:(id)a1;
- (id)initForFinishedJobID:(id)a0 withCatalog:(id)a1 whereCatalogFromLookupCache:(BOOL)a2 withError:(id)a3;
- (id)initWithClientRequest:(id)a0 withControlInformation:(id)a1;
- (id)initForFinishedJobID:(id)a0 withError:(id)a1;
- (id)initWithCoder:(id)a0;

@end
