@class NSArray, UIImageView, NSMutableDictionary, UILabel, UIView, NSLayoutConstraint;
@protocol _UIButtonBarAppearanceDelegate;

@interface _UIButtonBarButtonVisualProviderCarPlay : _UIButtonBarButtonVisualProvider

@property (weak, nonatomic) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIView *focusedView;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleView;
@property (retain, nonatomic) NSArray *titleAlternatives;
@property (retain, nonatomic) NSMutableDictionary *titleAlterntativeLookup;
@property (retain, nonatomic) NSArray *buttonConstraints;
@property (retain, nonatomic) NSLayoutConstraint *maxTitleViewWidthConstraint;
@property (retain, nonatomic) NSLayoutConstraint *backViewToContentConstraint;

- (void)updateButton:(id)a0 forFocusedState:(BOOL)a1;
- (BOOL)supportsBackButtons;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (void)updateButton:(id)a0 forHighlightedState:(BOOL)a1;
- (id)backIndicatorView;
- (void)configureButton:(id)a0 fromBarButtonItem:(id)a1;
- (void)buttonLayoutSubviews:(id)a0 baseImplementation:(id /* block */)a1;
- (void)_selectGestureChanged:(id)a0;
- (id)contentView;
- (void).cxx_destruct;
- (void)_setupAlternateTitlesFromBarButtonItem:(id)a0;
- (id)_titleAlternativeForTitle:(id)a0;

@end
