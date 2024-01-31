@class NSLayoutConstraint, NSString, NSArray, UILabel, UIView, UIButton;
@protocol EKUIFocusBannerViewDelegate;

@interface EKUIFocusBannerView : UIView <UILargeContentViewerInteractionDelegate> {
    NSArray *_activeConstraints;
    NSArray *_horizontalLayoutConstraints;
    NSArray *_verticalLayoutConstraints;
}

@property (retain, nonatomic) UILabel *focusFilterStateDescriptionLabel;
@property (retain, nonatomic) UIButton *focusFilterToggleButton;
@property (retain, nonatomic) UIView *topKeylineView;
@property (retain, nonatomic) NSLayoutConstraint *topKeylineHeightConstraint;
@property (nonatomic) BOOL on;
@property (nonatomic) BOOL showDividers;
@property (nonatomic) unsigned long long layout;
@property (nonatomic) BOOL disallowAccessibilityTextSizes;
@property (weak, nonatomic) id<EKUIFocusBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)largeContentImage;
- (void)contentSizeCategoryDidChange;
- (id)largeContentTitle;
- (void)updateConstraints;
- (BOOL)showsLargeContentViewer;
- (void)_updateView;
- (BOOL)scalesLargeContentImage;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_effectiveLayout;
- (void)largeContentViewerInteraction:(id)a0 didEndOnItem:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)_tapped;
- (void)_updateKeylineHeightConstraints;
- (id)_focusFilterButtonConfiguration;
- (id)_horizontalLayoutConstraints;
- (id)_verticalLayoutConstraints;

@end
