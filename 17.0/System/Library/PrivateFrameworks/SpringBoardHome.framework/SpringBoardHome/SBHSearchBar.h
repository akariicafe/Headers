@class SBHSearchVisualConfiguration, NSString, SBHSearchTextField, SBFFeatherBlurView, UIButton;
@protocol SBIconListLayoutProvider, SBHSearchBarDelegate;

@interface SBHSearchBar : SBFTouchPassThroughView <UITextFieldDelegate> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textFieldHorizontalLayoutInsets;
    double _textFieldCancelButtonSpacing;
}

@property (readonly, nonatomic) SBFFeatherBlurView *backgroundView;
@property (nonatomic) double backgroundViewBottomInsetToTextField;
@property (retain, nonatomic) SBHSearchTextField *searchTextField;
@property (weak, nonatomic) id<SBHSearchBarDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL alignsTextFieldOnPixelBoundaries;
@property (weak, nonatomic) id<SBIconListLayoutProvider> listLayoutProvider;
@property (readonly, copy, nonatomic) SBHSearchVisualConfiguration *activeSearchConfiguration;
@property (copy, nonatomic) SBHSearchVisualConfiguration *inactiveSearchConfiguration;
@property (nonatomic, getter=isPortraitOrientation) BOOL portraitOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityBoldStatusDidChange:(id)a0;
- (double)_performHeightCalculationForVisualConfiguration:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (void)_searchBarTextFieldDidChangeText:(id)a0;
- (void)_cancelButtonTapped:(id)a0;
- (void)setFocusGroupIdentifier:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)_currentVisualConfiguration;
- (void)_invalidateIntrinsicContentSizeAndNotify;
- (void)_updateCancelButtonFont;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forVisualConfiguration:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)textFieldShouldEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)canResignFirstResponder;
- (id)focusGroupIdentifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
