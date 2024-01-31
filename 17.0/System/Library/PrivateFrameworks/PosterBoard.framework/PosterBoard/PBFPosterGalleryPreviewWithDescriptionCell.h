@class PBFPosterGalleryViewSpec, NSString, UILabel, NSAttributedString, PBFPosterGalleryPreviewView;

@interface PBFPosterGalleryPreviewWithDescriptionCell : UICollectionViewCell <PBFPosterGalleryCollectionViewCell> {
    UILabel *_posterDescriptionLabel;
    struct { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterViewFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } posterDescriptionLabelFrame; struct CGSize { double width; double height; } intrinsicContentSize; } _metrics;
    PBFPosterGalleryViewSpec *_spec;
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

- (void)invalidateIntrinsicContentSize;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)prepareForReuse;
- (id)spec;
- (struct { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; struct CGSize { double x0; double x1; } x2; })metrics;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)pbf_displayContext;
- (id)posterDescriptionLabel;
- (void)updatePreviewType:(id)a0 scale:(double)a1 posterPreviewView:(id)a2 layoutOrientation:(long long)a3 index:(unsigned long long)a4;

@end
