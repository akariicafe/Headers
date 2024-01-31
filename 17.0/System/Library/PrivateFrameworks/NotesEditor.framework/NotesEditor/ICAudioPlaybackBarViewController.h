@class ICAttachment, ICAudioPlaybackScrubberView, ICMediaTimeLabel, ICAudioPlayPauseView, NSLayoutConstraint, UILabel, UIButton;

@interface ICAudioPlaybackBarViewController : ICAudioBarViewController

@property (retain, nonatomic) ICAudioPlayPauseView *playPauseView;
@property (retain, nonatomic) UIButton *skipBackwardButton;
@property (retain, nonatomic) NSLayoutConstraint *skipBackwardLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *skipBackwardRightConstraint;
@property (retain, nonatomic) UIButton *skipForwardButton;
@property (retain, nonatomic) NSLayoutConstraint *skipForwardRightConstraint;
@property (retain, nonatomic) ICAudioPlaybackScrubberView *scrubberView;
@property (retain, nonatomic) NSLayoutConstraint *scrubberLeftConstraint;
@property (retain, nonatomic) NSLayoutConstraint *scrubberRightConstraint;
@property (retain, nonatomic) ICMediaTimeLabel *leadingTimeLabel;
@property (retain, nonatomic) ICMediaTimeLabel *trailingTimeLabel;
@property (retain, nonatomic) NSLayoutConstraint *trailingTimeWidthConstraint;
@property (retain, nonatomic) UILabel *creationDateLabel;
@property (retain, nonatomic) ICAttachment *audioAttachment;

- (void)done:(id)a0;
- (void)dealloc;
- (void)updateLayout;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)registerForNotifications;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)attachmentWillBeDeletedNotification:(id)a0;
- (void)audioPlaybackTimeChangedNotification:(id)a0;
- (BOOL)isRegularHorizontalLayout;
- (void)noteWillBeDeletedNotification:(id)a0;
- (void)refreshTime:(id)a0;
- (void)scrubberValueChangedAction:(id)a0;
- (void)skipBackward:(id)a0;
- (void)skipForward:(id)a0;
- (void)updateMediaTimeAccessibilityLabels;

@end
