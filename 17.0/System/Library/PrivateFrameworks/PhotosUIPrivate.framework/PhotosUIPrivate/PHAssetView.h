@class PXPhotoKitAssetView, PHAsset, NSArray;

@interface PHAssetView : UIView

@property (retain, nonatomic) PXPhotoKitAssetView *impl;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL allowsTextSelection;
@property (nonatomic) BOOL allowsDragging;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (copy, nonatomic) NSArray *sceneIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *audioIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *humanActionIdentifiersToHighlight;
@property (copy, nonatomic) NSArray *personLocalIdentifiersToHighlight;

+ (id)localizedTitleForAsset:(id)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })preferredContentsRectForAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;

- (void)setContentMode:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)_commonPHAssetViewInit;

@end
