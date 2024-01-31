@class NSArray, CPUIModernButton, UIImage, NSLayoutConstraint, NSString;

@interface CPUITransportControlView : UIView

@property (retain, nonatomic) UIImage *playImage;
@property (retain, nonatomic) UIImage *pauseImage;
@property (retain, nonatomic) UIImage *defaultLeftButtonImage;
@property (retain, nonatomic) UIImage *defaultFastForwardButtonImage;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) NSLayoutConstraint *containerHeightConstraint;
@property (nonatomic) double buttonHeight;
@property (nonatomic) double buttonSpacing;
@property (readonly, nonatomic) CPUIModernButton *leftButton;
@property (readonly, nonatomic) CPUIModernButton *playPauseButton;
@property (readonly, nonatomic) CPUIModernButton *fastForwardButton;
@property (nonatomic) BOOL progressActive;
@property (retain, nonatomic) NSString *playButtonImageName;
@property (retain, nonatomic) NSString *pauseButtonImageName;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupConstraints;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updatePlayPauseButton;

@end
