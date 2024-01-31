@class NSMutableArray, NSString, UIImageView, UIImage, UIView, UILabel, UIButton;

@interface STSVideoCell : STSImageCell {
    UIButton *_playButton;
    UIView *_footerContainer;
    UILabel *_titleLabel;
    UIImageView *_providerIconView;
    UILabel *_subtitleLabel;
    UILabel *_providerLabel;
    UILabel *_durationLabel;
    NSMutableArray *_constraints;
}

@property (retain, nonatomic) UIImage *providerIcon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *providerName;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) id /* block */ playButtonAction;

- (void)setImage:(id)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)imageAspectRatio;
- (void)_didPressPlay;
- (void)_updateHiddenViewsAnimated:(BOOL)a0;

@end
