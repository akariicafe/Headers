@class NSArray, PSITopAssetsResult;

@interface PLTopAssetsSearchResult : NSObject

@property (readonly, nonatomic) PSITopAssetsResult *topAssetsResults;
@property (readonly, nonatomic) unsigned long long assetCount;
@property (readonly, nonatomic) NSArray *assetUUIDs;
@property (readonly, nonatomic) NSArray *assetUUIDsV2;

- (void).cxx_destruct;
- (id)initWithAssetUUIDs:(id)a0;
- (id)initWithTopAssetsResult:(id)a0;

@end
