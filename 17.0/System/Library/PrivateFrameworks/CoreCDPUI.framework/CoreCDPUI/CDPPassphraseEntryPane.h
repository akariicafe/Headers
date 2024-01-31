@class UIScrollView, CDPPaneHeaderView;

@interface CDPPassphraseEntryPane : DevicePINPane {
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    double _keyboardOffset;
    long long _deviceIdiom;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } availableHeaderRect;

- (void)_layoutSubviews;
- (BOOL)isSmallScreen;
- (void)dealloc;
- (id)headerView;
- (void)_keyboardWillShow:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_layoutContainerView;
- (void)_keyboardLayoutChanged;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (double)keyboardHeightOffset;
- (void)startListeningForKeyboardEvents;
- (double)desiredMinPinHeight;
- (void)didFinishResizingHeaderView;
- (void)didFinishResizingPinView;
- (BOOL)isVerySmallScreen;

@end
