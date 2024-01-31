@class UIView;

@interface TeaUI.JSONTextViewController : UIViewController <UITextViewDelegate, UISearchControllerDelegate, UITextFieldDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ textView;
    void /* unknown type, empty encoding */ textParser;
    void /* unknown type, empty encoding */ _textSize;
    void /* unknown type, empty encoding */ $__lazy_storage_$_searchToolbar;
    void /* unknown type, empty encoding */ $__lazy_storage_$_resultsBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextTokenBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_previousTokenBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textResizeBarButtonItem;
}

@property (nonatomic, readonly) UIView *inputAccessoryView;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)willDismissSearchController:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)willPresentSearchController:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)done;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)nextToken;
- (void)previousToken;

@end
