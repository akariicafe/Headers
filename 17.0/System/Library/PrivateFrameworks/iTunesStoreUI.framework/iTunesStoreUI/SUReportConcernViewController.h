@interface SUReportConcernViewController : SUTableViewController {
    BOOL _animatingKeyboard;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _originalTableInsets;
}

@property (readonly, nonatomic) unsigned long long itemIdentifier;

- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (id)initWithItemIdentifier:(unsigned long long)a0;
- (void)_cancel:(id)a0;
- (void)_submit:(id)a0;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;
- (void)_fetchConcerns;
- (void)_hideKeyboardDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_showKeyboardDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (BOOL)handleSelectionForIndexPath:(id)a0 tapCount:(long long)a1;
- (void)keyboardWillHideWithInfo:(id)a0;
- (void)keyboardWillShowWithInfo:(id)a0;

@end
