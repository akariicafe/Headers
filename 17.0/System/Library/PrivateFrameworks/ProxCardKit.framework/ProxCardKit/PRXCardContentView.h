@class PRXButton, UILayoutGuide, NSArray, NSLayoutConstraint, UIView, PRXLabel, PRXTextView;
@protocol PRXTextContainer, PRXCardContentViewDelegate;

@interface PRXCardContentView : UIView {
    NSArray *_titleViewConstraints;
    NSArray *_subtitleLabelConstraints;
    NSArray *_actionButtonConstraints;
    NSArray *_mainContentConstraints;
    NSLayoutConstraint *_titleViewHeightConstraint;
}

@property (weak, nonatomic) id<PRXCardContentViewDelegate> delegate;
@property (readonly, nonatomic) UILayoutGuide *internalContentGuide;
@property (readonly, nonatomic) long long cardStyle;
@property (retain, nonatomic) UIView<PRXTextContainer> *titleView;
@property (retain, nonatomic) PRXLabel *subtitleLabel;
@property (retain, nonatomic) PRXButton *dismissButton;
@property (copy, nonatomic) NSArray *actionButtons;
@property (retain, nonatomic) UIView *activityIndicator;
@property (readonly, nonatomic) UILayoutGuide *mainContentGuide;
@property (readonly, nonatomic) PRXTextView *titleTextView;
@property (readonly, nonatomic) PRXLabel *titleLabel;

- (id)init;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateConstraints;
- (void).cxx_destruct;
- (void)_invalidateMainContentConstraints;
- (id)auxiliaryViews;
- (id)initWithCardStyle:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cardStyle:(long long)a1;
- (void)updateTitleTextViewExclusionPathsForCardWidth:(double)a0;

@end
