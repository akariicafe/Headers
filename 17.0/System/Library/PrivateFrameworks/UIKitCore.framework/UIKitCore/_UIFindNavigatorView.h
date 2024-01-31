@class UIView, _UIFindNavigatorViewLayout, UIAction, UILabel, _UIFindNavigatorSearchTextField, UIButton;
@protocol _UIFindNavigatorViewDelegate;

@interface _UIFindNavigatorView : UIInputView {
    struct { UIView *left; UIView *right; UIView *bottom; } _separatorViews;
    struct { BOOL initialized; UIAction *find; UIAction *replace; UIAction *matchCase; UIAction *wholeWords; } _searchMenu;
    _UIFindNavigatorViewLayout *_layout;
}

@property (readonly, nonatomic) UIButton *nextResultButton;
@property (readonly, nonatomic) UIButton *previousResultButton;
@property (readonly, nonatomic) UIButton *replaceButton;
@property (weak, nonatomic) id<_UIFindNavigatorViewDelegate> findNavigatorDelegate;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL matchCase;
@property (nonatomic) BOOL wholeWords;
@property (nonatomic) BOOL usesOpaqueBackground;
@property (nonatomic) unsigned long long visibleSeparatorEdges;
@property (readonly, nonatomic) UIButton *doneButton;
@property (readonly, nonatomic) UIButton *settingsButton;
@property (readonly, nonatomic) UILabel *resultCountLabel;
@property (nonatomic) BOOL replaceButtonEnabled;
@property (nonatomic) BOOL intrinsicHeightDerivedFromAssistantBar;
@property (nonatomic) long long assistantBarStyle;
@property (readonly, nonatomic) _UIFindNavigatorSearchTextField *searchTextField;
@property (readonly, nonatomic) _UIFindNavigatorSearchTextField *replaceTextField;

- (void)willMoveToWindow:(id)a0;
- (void)find:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (BOOL)_canResignIfContainsFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_createNavigatorLayoutForTraitCollection:(id)a0;
- (void)_handleSearchMenuItem:(id)a0;
- (void)_invalidateSearchSession;
- (id)_linearFocusMovementSequences;
- (void)_navigatorHostingTypeChanged;
- (void)_preferredBackgroundColorChanged;
- (void)_preferredContentSizeDidChange;
- (BOOL)_replacementEnabled;
- (void)_setNavigatorLayout:(id)a0;
- (id)suggestedFindMenuItems;

@end
