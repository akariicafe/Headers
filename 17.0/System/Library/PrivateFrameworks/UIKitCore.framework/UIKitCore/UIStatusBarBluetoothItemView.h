@interface UIStatusBarBluetoothItemView : UIStatusBarItemView {
    BOOL _connected;
    BOOL _shouldAnimateConnection;
}

- (id)accessibilityHUDRepresentation;
- (void)setVisible:(BOOL)a0;
- (id)contentsImage;
- (double)alphaForConnected:(BOOL)a0;
- (void)performPendedActions;
- (BOOL)updateForNewData:(id)a0 actions:(int)a1;

@end
