@class PXDiagnosticsItemProvider, PHAsset, PHAssetCollection, UIViewController;
@protocol PXMovieProviderDelegate;

@interface PXMovieProvider : NSObject

@property (weak, nonatomic) id<PXMovieProviderDelegate> delegate;
@property (readonly, nonatomic) BOOL canPlayMovie;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHAsset *keyAsset;
@property (readonly, nonatomic) UIViewController *movieViewController;
@property (readonly, nonatomic) PXDiagnosticsItemProvider *diagnosticsItemProvider;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)initWithAssetCollection:(id)a0 keyAsset:(id)a1;
- (BOOL)ppt_runTest:(id)a0 options:(id)a1;

@end
