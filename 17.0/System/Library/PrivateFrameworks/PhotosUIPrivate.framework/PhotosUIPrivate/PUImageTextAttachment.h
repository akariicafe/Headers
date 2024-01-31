@class UIImageView, _PUImageTextAttachmentViewProvider;

@interface PUImageTextAttachment : NSTextAttachment {
    _PUImageTextAttachmentViewProvider *_viewProvider;
}

@property (readonly, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)imageForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 attributes:(id)a1 location:(id)a2 textContainer:(id)a3;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForAttributes:(id)a0 location:(id)a1 textContainer:(id)a2 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 position:(struct CGPoint { double x0; double x1; })a4;
- (id)viewProviderForParentView:(id)a0 location:(id)a1 textContainer:(id)a2;
- (id)initWithImageView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
