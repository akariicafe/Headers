@class NSString, UIImageView, UIImage, UILabel;

@interface SULockoutView : UIView {
    UIImageView *_backgroundImageView;
    UILabel *_bodyLabel;
    UIImageView *_glowImageView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
}

@property (retain, nonatomic) UIImage *backgroundImage;
@property (copy, nonatomic) NSString *body;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *glowImage;
@property (nonatomic) long long layoutPreset;
@property (copy, nonatomic) NSString *title;

- (void)dealloc;
- (id)_imageView;
- (id)_titleLabel;
- (id)_newLabel;
- (void)layoutSubviews;
- (id)_bodyLabel;
- (void)_layoutForSlowNetwork;

@end
