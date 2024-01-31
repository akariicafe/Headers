@interface _SCNSnapshotWindow : UIWindow

- (BOOL)_canBecomeKeyWindow;
- (void)dealloc;
- (BOOL)_isSettingFirstResponder;
- (id)_hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1 windowServerHitTestWindow:(id)a2;
- (void)_setFirstResponder:(id)a0;
- (struct CGPoint { double x0; double x1; })warpPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)scnView;
- (struct CGPoint { double x0; double x1; })_warpPoint:(struct CGPoint { double x0; double x1; })a0 outOfBounds:(BOOL *)a1;

@end
