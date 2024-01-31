@class UIStackView, NSString, UIImage, PSWebContainerView, SUSSoftwareUpdateAnimatedIcon, UIImageView, NSArray, NSMutableArray, NSLayoutConstraint, UIProgressView, UILabel;
@protocol SUSUISoftwareUpdateTitleCellDelegate;

@interface SUSSoftwareUpdateTitleCell : PSTableCell <SUSSoftwareUpdateCellProtocol> {
    int _progressStyle;
    SUSSoftwareUpdateAnimatedIcon *_animatedGearView;
    UIImageView *_imageView;
    UIImage *_updateIcon;
    BOOL _animatingGearView;
    BOOL _showLearnMoreButton;
    UIStackView *_stackView;
    NSMutableArray *_updateNameConstraints;
    NSMutableArray *_updatePublisherConstraints;
    NSArray *_updateIconContraints;
}

@property (retain, nonatomic) NSLayoutConstraint *updateStatusLabelVerticalConstraint;
@property (weak, nonatomic) id<SUSUISoftwareUpdateTitleCellDelegate> delegate;
@property (readonly, nonatomic) UIImage *gearBackgroundImage;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly, nonatomic) UIProgressView *progressBar;
@property (nonatomic) int progressDisplayStyle;
@property (readonly, nonatomic) UILabel *updateNameLabel;
@property (readonly, nonatomic) UILabel *updatePublisherLabel;
@property (readonly, nonatomic) UILabel *updateStatusLabel;
@property (readonly, nonatomic) UILabel *learnMoreLabel;
@property (readonly, nonatomic) PSWebContainerView *releaseNotesSummaryView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyle;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)setProgress:(float)a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)detailTextLabel;
- (void)setupViews;
- (void)setStatusMessage:(id)a0;
- (void)configureImageView;
- (void)configureAnimatedGearViewFromImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)configureProgressBar:(BOOL)a0;
- (void)configurePublisherLabel:(BOOL)a0;
- (void)configureReleaseNotesSummaryView:(BOOL)a0;
- (void)configureUpdateNameLabel:(BOOL)a0;
- (void)configureUpdateStatusLabel:(BOOL)a0;
- (id)newProgressBar;
- (id)newSoftwareUpdateAnimatedIconWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)newUpdateStatusLabel;
- (double)preferredHeightWithTable:(id)a0;
- (void)setAnimatingGearView:(BOOL)a0;
- (void)setPublisherText:(id)a0;
- (void)setReleaseNotesSummary:(id)a0;
- (void)setUpdateName:(id)a0;
- (void)updateProgressTintColor;
- (void)setLearnMoreText:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2 updateIcon:(id)a3 showLearnMore:(BOOL)a4 delegate:(id)a5;
- (void)setStatusMessage:(id)a0 symbolizingError:(BOOL)a1;
- (void)setUpdateIcon:(id)a0;
- (id)configureUpdateIcon;
- (void)configureUpdateImageViewFromImageSize:(struct CGSize { double x0; double x1; })a0;
- (void)handleLearnMoreTap:(id)a0;
- (id)newLearnMoreLabel;
- (void)updateStatusLabelVerticalConstraints;

@end
