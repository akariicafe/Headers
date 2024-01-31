@class FAProfilePictureStore, RUITableView;

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {
    RUITableView *_remoteTableViewController;
    FAProfilePictureStore *_pictureStore;
}

+ (BOOL)_shouldShowPictureInSection:(id)a0;
+ (BOOL)shouldShowPicturesInPage:(id)a0;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_profilePictureStoreDidReload;
- (id)initWithTableView:(id)a0 ruiTableView:(id)a1 pictureStore:(id)a2;

@end
