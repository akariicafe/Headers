@interface SUScriptDialogNativeObject : SUScriptNativeObject

- (void)dismiss;
- (void)show;
- (id)_makeAlertControllerForDialog:(id)a0 style:(long long)a1;
- (void)_showSheetInView:(id)a0 fromViewController:(id)a1;
- (void)_tearDownForDismissWithButtonIndex:(long long)a0;
- (void)showFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)showSheet;
- (void)showSheetInViewController:(id)a0;

@end
