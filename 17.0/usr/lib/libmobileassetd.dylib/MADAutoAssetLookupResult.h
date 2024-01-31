@class MADAutoSetConfiguration, NSString, MAAutoAssetSelector, NSDictionary, NSDate;

@interface MADAutoAssetLookupResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) MAAutoAssetSelector *assetSelector;
@property (readonly, retain, nonatomic) MADAutoSetConfiguration *setConfiguration;
@property (readonly, retain, nonatomic) NSString *assetAudience;
@property (readonly, retain, nonatomic) NSDictionary *autoAssetCatalog;
@property (readonly, retain, nonatomic) NSDate *recordedTimestamp;

- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithAssetCatalog:(id)a0 forAssetSelector:(id)a1 forAssetAudience:(id)a2;
- (id)initWithAssetCatalog:(id)a0 forAssetSelector:(id)a1 forSetConfiguration:(id)a2 forAssetAudience:(id)a3;
- (id)initWithAssetCatalog:(id)a0 forSetConfiguration:(id)a1 forAssetAudience:(id)a2;

@end
