@class NSArray, NSMutableDictionary;
@protocol CDMTrialAssetsDelegate;

@interface CDMAssetsDelegateHandler : NSObject {
    id<CDMTrialAssetsDelegate> _delegate;
    NSArray *_assetSetNames;
    NSMutableDictionary *_assetsAvailabilities;
}

- (void).cxx_destruct;
- (void)notifyDelegate;
- (BOOL)assetsAvailableForAssetSet:(id)a0 forLocale:(id)a1;
- (BOOL)assetsUnavailableForAssetSet:(id)a0;
- (id)initWithAssetsDelegate:(id)a0 forAssetSets:(id)a1;

@end
