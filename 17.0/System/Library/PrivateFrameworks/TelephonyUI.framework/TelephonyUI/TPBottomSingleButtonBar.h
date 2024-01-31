@class TPButton;

@interface TPBottomSingleButtonBar : TPBottomBar {
    id _delegate;
    TPButton *_button;
}

+ (id)_backgroundImage;

- (id)button;
- (void).cxx_destruct;
- (double)buttonWidth;
- (void)setButton:(id)a0 andStyle:(BOOL)a1;

@end
