@class MAAutoAssetSelector;

@interface IRMobileAssetClient : NSObject

@property (retain, nonatomic) MAAutoAssetSelector *currentAssetSelector;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_createInterestInAssetType:(id)a0 withAssetSpecifier:(id)a1;
- (id)getLockedAssetVersion;
- (id)lockAssetContent;
- (void)unlockAssetContent;

@end
