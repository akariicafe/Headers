@class FBKOSLogViewerDataSource, NSString, UIActivityIndicatorView, NSURL;

@interface FBKOSLogViewController : UITableViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain) NSURL *logURL;
@property (retain) FBKOSLogViewerDataSource *logSource;
@property BOOL previousToolbarHidden;
@property (readonly, getter=isLoading) BOOL loading;
@property (weak) UIActivityIndicatorView *spinner;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canDisplayURL:(id)a0;

- (void)setLoading:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)nextPage;
- (void)setOSLogURL:(id)a0;
- (void)shareArchive:(id)a0;

@end
