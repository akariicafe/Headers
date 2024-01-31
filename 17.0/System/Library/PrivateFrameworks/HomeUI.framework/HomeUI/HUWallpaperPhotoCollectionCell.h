@class NSArray, UIImageView, UIImage, UILabel, NSLayoutConstraint, NSString;

@interface HUWallpaperPhotoCollectionCell : UITableViewCell

@property (retain, nonatomic) UIImageView *imageThumbnailView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) NSArray *imageSizeConstraints;
@property (retain, nonatomic) NSArray *horizontalConstraints;
@property (retain, nonatomic) NSLayoutConstraint *imageWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *imageHeightConstraint;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSString *descriptionText;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
