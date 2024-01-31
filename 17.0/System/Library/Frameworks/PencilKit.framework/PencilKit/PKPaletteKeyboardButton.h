@class UIImage, PKTextInputLanguageSelectionToken, UIMenu;

@interface PKPaletteKeyboardButton : PKPaletteButton {
    UIImage *_indicatorImage;
    PKTextInputLanguageSelectionToken *_observerToken;
}

@property (nonatomic) long long floatingKeyboardType;
@property (nonatomic) BOOL enableKeyboardToggle;
@property (retain, nonatomic) UIMenu *keyboardSelectionMenu;

- (void)dealloc;
- (id)initWithImage:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void).cxx_destruct;
- (void)_updateButtonImage;
- (void)_updateKeyboardToggleState;

@end
