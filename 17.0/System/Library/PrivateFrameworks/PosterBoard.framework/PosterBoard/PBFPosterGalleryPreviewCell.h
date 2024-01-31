@class NSString, UILabel, NSAttributedString, PBFPosterGalleryPreviewView;

@interface PBFPosterGalleryPreviewCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    UILabel *_titleLabel;
    struct CGSize { double width; double height; } _titleLabelSize;
    long long _layoutOrientation;
    NSString *_previewType;
}

@property (readonly, nonatomic) PBFPosterGalleryPreviewView *posterPreviewView;
@property (readonly, nonatomic) BOOL supportsPosterTitle;
@property (readonly, nonatomic) BOOL supportsPosterDescription;
@property (copy, nonatomic) NSString *posterTitle;
@property (copy, nonatomic) NSAttributedString *attributedPosterTitle;
@property (copy, nonatomic) NSString *posterDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })contentSizeForCellWithTitle:(BOOL)a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (struct CGSize { double x0; double x1; })contentSizeForCellWithTitleSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (struct CGSize { double x0; double x1; })contentSizeForSmartAlbumCellWithTitle:(BOOL)a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (struct CGSize { double x0; double x1; })contentSizeForSmartAlbumCellWithTitleSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (struct CGSize { double x0; double x1; })heroContentSizeForCellWithTitle:(BOOL)a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (struct CGSize { double x0; double x1; })heroContentSizeForCellWithTitleSize:(struct CGSize { double x0; double x1; })a0 interfaceOrientation:(long long)a1 spec:(id)a2;
+ (double)maximumTitleHeightForFont:(id)a0;

- (void)prepareForReuse;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })a0 withHorizontalFittingPriority:(float)a1 verticalFittingPriority:(float)a2;
- (id)titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setMutableAttributedPosterTitle:(id)a0;
- (id)pbf_displayContext;
- (void)updatePreviewType:(id)a0 scale:(double)a1 posterPreviewView:(id)a2 layoutOrientation:(long long)a3 index:(unsigned long long)a4;

@end
