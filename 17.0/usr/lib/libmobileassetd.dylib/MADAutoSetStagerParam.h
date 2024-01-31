@class NSString, MADAutoAssetClientRequest, MADAutoSetJobInformation, NSError, MAAutoAssetSelector, NSArray;

@interface MADAutoSetStagerParam : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *paramSafeSummary;
@property (readonly, nonatomic) long long paramType;
@property (retain, nonatomic) MADAutoAssetClientRequest *stagingClientRequest;
@property (readonly, retain, nonatomic) MADAutoSetJobInformation *jobInformation;
@property (readonly, retain, nonatomic) NSError *operationError;
@property (readonly, retain, nonatomic) NSString *assetType;
@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) NSArray *alreadyDownloaded;

- (id)initWithAssetType:(id)a0;
- (id)_summary;
- (void)updateSafeSummary;
- (id)initWithSafeSummary:(id)a0;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithAlreadyDownloadedDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)initWithJobInformation:(id)a0 withOperationError:(id)a1;
- (id)initWithStagingClientRequest:(id)a0;
- (id)initWithAssetSelector:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParamType:(long long)a0 withSafeSummary:(id)a1 withStagingClientRequest:(id)a2 withJobInformation:(id)a3 withOperationError:(id)a4 withAssetType:(id)a5 withAssetSelector:(id)a6 withAlreadyDownloaded:(id)a7;

@end
