@class SUUIClientContext, NSArray, SUUICategoryArtworkLoader, SUUICategory, NSURL, NSString;
@protocol SUUICategoryTableViewControllerDelegate;

@interface SUUICategoryTableViewController : UITableViewController <SUUICategoryArtworkLoaderObserver, SUUICategoryTableViewControllerDelegate> {
    BOOL _childrenHaveArtwork;
}

@property (retain, nonatomic) SUUICategoryArtworkLoader *artworkLoader;
@property (retain, nonatomic) SUUICategory *category;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUICategoryTableViewControllerDelegate> delegate;
@property (copy, nonatomic) NSArray *metricsLocations;
@property (nonatomic) long long numberOfHiddenRows;
@property (retain, nonatomic) NSURL *selectedURL;
@property (retain, nonatomic) NSURL *defaultURL;
@property (nonatomic, getter=isRoot) BOOL root;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (id)_categoryAtIndexPath:(id)a0;
- (void)_doneButtonAction:(id)a0;
- (long long)_metricsLocationPostionForIndexPath:(id)a0;
- (id)_metricsLocationsToPushIndexPath:(id)a0;
- (void)_recordClickEventForIndexPath:(id)a0 category:(id)a1 actionType:(id)a2;
- (void)categoryArtworkLoader:(id)a0 didLoadImage:(id)a1 forCategory:(id)a2;
- (void)categoryTableView:(id)a0 didSelectCategory:(id)a1;
- (id)metricsPageContextForCategoryTableView:(id)a0;

@end
