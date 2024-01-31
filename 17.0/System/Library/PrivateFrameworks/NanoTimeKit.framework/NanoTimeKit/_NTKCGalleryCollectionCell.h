@class UIStackView, NTKCFaceContainerView, NSString, UIImage, UIView, UIFontMetrics, UILabel;

@interface _NTKCGalleryCollectionCell : UICollectionViewCell {
    UILabel *_nameLabel;
    UIStackView *_contentStack;
}

@property (retain, nonatomic) UIView *faceView;
@property (retain, nonatomic) NTKCFaceContainerView *faceContainerView;
@property (copy, nonatomic) NSString *calloutName;
@property (retain, nonatomic) UIImage *calloutImage;
@property (nonatomic) BOOL active;
@property (retain, nonatomic) UIFontMetrics *fontMetrics;

+ (id)reuseIdentifier;
+ (id)agaveReuseIdentifier;
+ (id)aloeReuseIdentifier;
+ (id)classicReuseIdentifier;
+ (id)luxoReuseIdentifier;

- (void)dealloc;
- (void)setHighlighted:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)_highlight;

@end
