@class NSString, NSArray, UITraitCollection;

@interface AMSUIBundleImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) NSString *imageName;
@property (retain, nonatomic) NSArray *bundlesToSearch;
@property (retain, nonatomic) UITraitCollection *traitCollection;

- (void)main;
- (void).cxx_destruct;
- (BOOL)isLowLatency;
- (id)initWithImageName:(id)a0 searchBundles:(id)a1 compatibleWithTraitCollection:(id)a2;

@end
