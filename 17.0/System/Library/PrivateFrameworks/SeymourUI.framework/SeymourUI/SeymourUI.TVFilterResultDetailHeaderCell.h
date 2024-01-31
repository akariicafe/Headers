@class NSArray, UILabel;

@interface SeymourUI.TVFilterResultDetailHeaderCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ itemInfo;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ floatingView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ actionLabel;
    void /* unknown type, empty encoding */ labelStackView;
    void /* unknown type, empty encoding */ buttonStackView;
    void /* unknown type, empty encoding */ focusGuide;
    void /* unknown type, empty encoding */ labelStackViewTrailingConstraint;
}

@property (nonatomic, readonly) BOOL canBecomeFocused;
@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;
@property (nonatomic, readonly) UILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) UILabel *accessibilityActionLabel;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)primaryActionButtonPressed:(id)a0;
- (void)secondaryActionButtonPressed:(id)a0;

@end
