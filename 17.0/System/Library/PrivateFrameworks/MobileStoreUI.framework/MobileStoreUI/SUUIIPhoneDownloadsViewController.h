@class _UIContentUnavailableView, NSArray, NSString, SUUIClientContext, UITableView;
@protocol SUUIDownloadsChildViewControllerDelegate;

@interface SUUIIPhoneDownloadsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
    _UIContentUnavailableView *_noContentView;
}

@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) NSArray *downloads;
@property (weak, nonatomic) id<SUUIDownloadsChildViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_reload;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)reloadDownloadsAtIndexes:(id)a0;

@end
