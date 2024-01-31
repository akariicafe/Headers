@class NSString, UIImage, UIImageView;

@interface AXRActionCollectionViewCell : UICollectionViewCell <UILargeContentViewerItem> {
    UIImageView *_imageView;
}

@property (readonly, nonatomic) BOOL showsLargeContentViewer;
@property (readonly, copy, nonatomic) NSString *largeContentTitle;
@property (readonly, nonatomic) UIImage *largeContentImage;
@property (readonly, nonatomic) BOOL scalesLargeContentImage;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } largeContentImageInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)accessibilityTraits;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setImage:(id)a0 title:(id)a1;

@end
