@class UIImage;

@interface VUIVideosImageView : UIImageView {
    BOOL _selected;
    UIImage *_flatImage;
}

@property (retain, nonatomic) UIImage *highlightOrSelectedImage;

+ (id)imageWithImage:(id)a0 existingImageView:(id)a1;

- (void)setHighlighted:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)_updateImage;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
