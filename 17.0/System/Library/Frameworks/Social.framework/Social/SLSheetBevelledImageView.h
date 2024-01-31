@class UIImageView, UIView;

@interface SLSheetBevelledImageView : SLSheetImagePreviewView {
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

@property (nonatomic) BOOL needsURLPlaceholderImage;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)ensurePlaceholderPreviewImage;
- (BOOL)generatePreviewImageFromAttachments;

@end
