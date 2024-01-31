@interface UIStatusBarSignalStrengthItemView : UIStatusBarItemView {
    int _signalStrengthRaw;
    int _signalStrengthBars;
    BOOL _enableRSSI;
    BOOL _showRSSI;
    BOOL _showFailure;
    BOOL _useSmallBars;
}

- (id)accessibilityHUDRepresentation;
- (id)contentsImage;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (id)_signalStrengthBarsImageName;
- (id)_stringForRSSI;
- (BOOL)_updateWithRaw:(int)a0 bars:(int)a1 enableRSSI:(BOOL)a2 showFailure:(BOOL)a3 useSmallBars:(BOOL)a4;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
