@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {
    _SFSingleBookmarkNavigationController *_bookmarkNavigationController;
}

@property (readonly, nonatomic) _SFSingleBookmarkNavigationController *bookmarkNavigationController;

- (id)activityType;
- (void)addBookmarkNavController:(id)a0 didFinishWithResult:(BOOL)a1 bookmark:(id)a2;
- (id)activityTitle;
- (void).cxx_destruct;
- (BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)a0;
- (id)activityViewController;
- (id)_systemImageName;
- (BOOL)canPerformWithActivityItems:(id)a0;
- (id)_embeddedActivityViewController;

@end
