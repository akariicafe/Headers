@class UIStackView, NSArray, CPUIModernButton, CPUIRepeatButton;
@protocol CPUIPlayModeControlViewDelegate;

@interface CPUIPlayModeControlView : UIView

@property (retain, nonatomic) NSArray *activeButtonLayoutConstraints;
@property (weak, nonatomic) id<CPUIPlayModeControlViewDelegate> delegate;
@property (nonatomic) BOOL fuseSubscriberLayout;
@property (readonly, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) NSArray *mediaButtons;
@property (nonatomic) double buttonWidth;
@property (nonatomic) double buttonSpacing;
@property (nonatomic) BOOL showsArtwork;
@property (readonly, nonatomic) CPUIModernButton *shuffleButton;
@property (readonly, nonatomic) CPUIModernButton *addToLibraryButton;
@property (readonly, nonatomic) CPUIModernButton *moreButton;
@property (readonly, nonatomic) CPUIModernButton *playbackRateButton;
@property (readonly, nonatomic) CPUIRepeatButton *repeatButton;

- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_updateButtonLayouts;
- (id)_visibleControlButtons;
- (id)defaultPlayModeButtons;
- (void)playModeButtonTapped:(id)a0;

@end
