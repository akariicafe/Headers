@class TabDocument, _SFSingleBookmarkNavigationController;
@protocol AddBookmarkActivityDelegate;

@interface AddToFavoritesUIActivity : TabDocumentActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavController;
    TabDocument *_tabDocument;
}

@property (weak, nonatomic) id<AddBookmarkActivityDelegate> delegate;
@property (nonatomic) BOOL isForPerTabGroupFavorites;

- (id)activityType;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (id)activityTitle;
- (void).cxx_destruct;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)activityViewController;
- (id)_systemImageName;
- (void)activityDidFinish:(BOOL)a0;
- (id)_embeddedActivityViewController;
- (BOOL)canPerformWithTabDocument:(id)a0;
- (void)prepareWithTabDocument:(id)a0;

@end
