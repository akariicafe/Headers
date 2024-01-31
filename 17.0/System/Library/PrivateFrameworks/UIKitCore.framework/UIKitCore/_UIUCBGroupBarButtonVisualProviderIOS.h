@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIColor *_tintColor;
}

@property (nonatomic) BOOL lightKeyboard;

+ (id)lightKeyboardProvider;
+ (id)darkKeyboardProvider;

- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (BOOL)shouldLift;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (long long)_securePasteButtonSite;
- (void)setTintColor:(id)a0;
- (id)tintColor;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)imageSymbolConfiguration;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
