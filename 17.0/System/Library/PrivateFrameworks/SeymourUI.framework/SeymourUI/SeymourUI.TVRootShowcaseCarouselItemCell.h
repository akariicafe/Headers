@class UILabel;

@interface SeymourUI.TVRootShowcaseCarouselItemCell : SeymourUI.TVFocusableCollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ carouselItemDelegate;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ avPlayer;
    void /* unknown type, empty encoding */ avPlayerLayer;
    void /* unknown type, empty encoding */ blurView;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ textStackView;
    void /* unknown type, empty encoding */ captionLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ focusContainerGuide;
    void /* unknown type, empty encoding */ buttonWidthConstraint;
    void /* unknown type, empty encoding */ buttons;
    void /* unknown type, empty encoding */ buttonActions;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) UILabel *accessibilityCaptionLabel;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)handleTappedButton:(id)a0;
- (void)restartVideo;

@end
