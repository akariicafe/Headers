@class MAAutoAssetSelector;

@interface DDSMAAutoAssetSelector : NSObject

@property (readonly, nonatomic) MAAutoAssetSelector *assetSelector;

+ (id)createWithQuery:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1;

@end
