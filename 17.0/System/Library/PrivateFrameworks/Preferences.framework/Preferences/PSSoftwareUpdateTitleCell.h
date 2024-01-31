@class UIProgressView, PSSoftwareUpdateAnimatedIcon, UIImageView, UIImage, NSLayoutConstraint, UILabel, PSWebContainerView;

@interface PSSoftwareUpdateTitleCell : PSTableCell {
    int _progressStyle;
    PSSoftwareUpdateAnimatedIcon *_animatedGearView;
    BOOL _animatingGearView;
}

@property (retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint;
@property (readonly, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *gearBackgroundImageView;
@property (readonly, nonatomic) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (readonly, nonatomic) UILabel *updateStatusLabel;
@property (readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView;

+ (long long)cellStyle;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setProgress:(float)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setStatusMessage:(id)a0;
- (void)configureImageView;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureProgressBar:(BOOL)a0;
- (void)configurePublisherLabel:(BOOL)a0;
- (void)configureReleaseNotesSummaryView:(BOOL)a0;
- (void)configureUpdateNameLabel:(BOOL)a0;
- (void)configureUpdateStatusLabel:(BOOL)a0;
- (void)createGearIconConstraints;
- (id)newGearBackgroundImageView;
- (id)newProgressBar;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)newUpdateStatusLabel;
- (double)preferredHeightWithTable:(id)a0;
- (void)setAnimatingGearView:(BOOL)a0;
- (void)setPublisherText:(id)a0;
- (void)setReleaseNotesSummary:(id)a0;
- (void)setUpdateName:(id)a0;
- (void)updateProgressTintColor;

@end
