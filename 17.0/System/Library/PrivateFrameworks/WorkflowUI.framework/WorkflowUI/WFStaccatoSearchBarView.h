@class NSString, UISearchTextField, UIButton;
@protocol WFStaccatoSearchBarDelegate;

@interface WFStaccatoSearchBarView : UIView <UITextFieldDelegate, WFStaccatoSearchTextFieldDelegate> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _textFieldHorizontalLayoutInsets;
    double _textFieldCancelButtonSpacing;
}

@property (retain, nonatomic) UISearchTextField *searchTextField;
@property (weak, nonatomic) id<WFStaccatoSearchBarDelegate> delegate;
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) UIButton *cancelButton;
@property (nonatomic) BOOL showsCancelButton;
@property (nonatomic) BOOL alignsTextFieldOnPixelBoundaries;
@property (readonly, copy, nonatomic) id activeSearchConfiguration;
@property (copy, nonatomic) id inactiveSearchConfiguration;
@property (nonatomic, getter=isPortraitOrientation) BOOL portraitOrientation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setShowsCancelButton:(BOOL)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_accessibilityBoldStatusDidChange:(id)a0;
- (double)_performHeightCalculationForVisualConfiguration:(id)a0;
- (void)_searchBarTextFieldDidChangeText:(id)a0;
- (void)_cancelButtonTapped:(id)a0;
- (void)setFocusGroupIdentifier:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (id)_currentVisualConfiguration;
- (void)_invalidateIntrinsicContentSizeAndNotify;
- (void)_updateCancelButtonFont;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forVisualConfiguration:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (BOOL)canResignFirstResponder;
- (id)focusGroupIdentifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)textFieldDidResignFirstResponder;

@end
