@protocol CSAttSiriAttentionAssetsStatusProviderDelegate;

@interface CSAttSiriAttentionAssetsStatusProvider : NSObject

@property (weak, nonatomic) id<CSAttSiriAttentionAssetsStatusProviderDelegate> delegate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_updateWithAsset:(id)a0;
- (id)initWithMitigationAssetHandler:(id)a0;
- (void)mitigationAssetHandler:(id)a0 endpointId:(id)a1 didChangeCachedAsset:(id)a2;

@end
