@class NSString, UIImageView, UIImage, UILabel;

@interface CNAutocompleteSuggestionsCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *displayString;

+ (id)cellIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (BOOL)useAccessibleLayout;

@end
