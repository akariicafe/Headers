@class UIImage;

@interface CKPassMediaObject : CKPassbookMediaObject

@property (retain, nonatomic) UIImage *icon;

- (id)subtitle;
- (void).cxx_destruct;
- (id)title;
- (id)generateThumbnailFillToSize:(struct CGSize { double x0; double x1; })a0 contentAlignmentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (id)initWithTransfer:(id)a0 context:(id)a1 forceInlinePreview:(BOOL)a2;
- (id)passView;

@end
