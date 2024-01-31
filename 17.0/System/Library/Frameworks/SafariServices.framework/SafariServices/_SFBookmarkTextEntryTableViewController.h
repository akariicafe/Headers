@class NSString, _SFBookmarkTextEntryTableViewCell;
@protocol _SFBookmarkTextEntryTableViewControllerDelegate;

@interface _SFBookmarkTextEntryTableViewController : UITableViewController {
    id<_SFBookmarkTextEntryTableViewControllerDelegate> _delegate;
    NSString *_initialText;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    _SFBookmarkTextEntryTableViewCell *_textEntryCell;
}

- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_returnWasPressedInTextField:(id)a0;
- (id)initWithBookmarkInfoViewField:(unsigned long long)a0 text:(id)a1 autocapitalizationType:(long long)a2 autocorrectionType:(long long)a3 delegate:(id)a4;

@end
