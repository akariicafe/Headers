@class SLURLPreviewGenerator, UIImageView, UIImage, UIView;

@interface SLSheetURLPreviewView : SLSheetImagePreviewView {
    UIImage *_shadowImage;
    SLURLPreviewGenerator *_webPreviewGenerator;
    UIView *_placeholderPreviewView;
    UIImageView *_placeholderGlyphView;
}

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)layoutSubviews;
- (void)_generateAutomaticPreviewForURL:(id)a0;
- (void)ensurePlaceholderPreviewImage;
- (BOOL)generatePreviewImageFromAttachments;

@end
