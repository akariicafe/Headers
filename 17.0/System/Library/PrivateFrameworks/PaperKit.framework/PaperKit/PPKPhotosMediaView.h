@class PXDisplayAssetView, _PhotosMediaViewAnalysisController;
@protocol PPKPhotosMediaViewImageAnalysisInteractionContext;

@interface PPKPhotosMediaView : UIView

@property (readonly, nonatomic) PXDisplayAssetView *assetView;
@property (readonly, nonatomic) _PhotosMediaViewAnalysisController *analysisController;
@property (readonly, nonatomic) id<PPKPhotosMediaViewImageAnalysisInteractionContext> imageAnalysisContext;
@property (nonatomic) BOOL isImageAnalysisEnabled;

- (id)initWithImageURL:(id)a0;
- (id)initWithImageData:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)setURL:(id)a0;
- (void)didMoveToWindow;
- (id)initWithImage:(struct CGImage { } *)a0 orientation:(long long)a1;
- (void)_ensureImageAnalysisControllerIfNecessary;
- (void)setImage:(struct CGImage { } *)a0 orientation:(long long)a1;

@end
