@interface WorkflowEditor.EditorDrawerSheetHostingViewController : UIViewController <WFActionDrawerScrollViewObserver> {
    void /* unknown type, empty encoding */ rootView;
    void /* unknown type, empty encoding */ test;
    void /* unknown type, empty encoding */ hostingViewController;
    void /* unknown type, empty encoding */ scrollViewDelegate;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)activeScrollViewDidChange;

@end
