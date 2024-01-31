@class NSString, UITableViewCell, WKWebView, UIImageView, NSObject, UIWebClip;
@protocol _SFWebClipViewControllerDelegate;

@interface _SFWebClipViewController : UITableViewController <UITextFieldDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
    WKWebView *_webView;
    UITableViewCell *_titleCell;
    UITableViewCell *_addressCell;
    UIImageView *_iconImageView;
    BOOL _suspendAfterDismiss;
    BOOL _delegateNotifiedOfResult;
    BOOL _showingDemoModeAlert;
}

@property (retain) UIWebClip *webClip;
@property (weak, nonatomic) NSObject<_SFWebClipViewControllerDelegate> *delegate;
@property (nonatomic) BOOL canEditAndSave;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cancel;
- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_add;
- (BOOL)_shouldUseTranslucentAppearance;
- (BOOL)_canAddWebClip;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_cellInset;
- (struct CGPoint { double x0; double x1; })_centerForIconView;
- (BOOL)_showDemoModeFeatureDisabledAlert;
- (void)_textFieldChanged:(id)a0;
- (void)bookmarkTextEntryTableViewController:(id)a0 dismissedWithText:(id)a1;
- (BOOL)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)a0;
- (BOOL)createAndAddToHomeScreenBundle;
- (void)updateUIAnimated:(BOOL)a0;

@end
