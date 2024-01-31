@class UIView, NSString, PKPaymentSetupDockView, UITableViewController, NSAttributedString, PKHyperlinkTextView, UITableView, _PKVisibilityBackdropView, NSIndexPath;

@interface PKPaymentSetupTableViewController : UIViewController <_PKVisibilityBackdropViewDelegate, PKPaymentSetupPresentationProtocol, UITableViewDataSource, UITableViewDelegate> {
    UITableViewController *_tableViewController;
    UIView *_containerView;
    long long _style;
    PKPaymentSetupDockView *_dockView;
    _PKVisibilityBackdropView *_blurringView;
    double _backdropWeight;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _keyboardVisible;
}

@property (retain, nonatomic) PKHyperlinkTextView *footerTextView;
@property (nonatomic) long long context;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (copy, nonatomic) NSAttributedString *footerAttributedText;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (nonatomic) BOOL moveFooterWithKeyboard;
@property (readonly, copy, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithContext:(long long)a0;
- (void)_keyboardWillShow:(id)a0;
- (void)loadView;
- (void)_keyboardWillHide:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)tableViewDidFinishReload:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_keyboardWillChange:(id)a0;
- (id)addFooterStyleAttributes:(id)a0;
- (id)initWithStyle:(long long)a0 context:(long long)a1;
- (unsigned long long)paymentSetupMarker;
- (BOOL)paymentSetupMarkerRemovalIsInclusive;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;

@end
