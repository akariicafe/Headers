@class BookmarkFolderLibraryItemController, ReadingListLibraryItemController, HistoryLibraryItemController;

@interface MainLibrarySectionController : LibrarySectionController {
    HistoryLibraryItemController *_historyController;
    ReadingListLibraryItemController *_readingListController;
    BookmarkFolderLibraryItemController *_bookmarksItemController;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)itemControllers;
- (void)registerItemsWithRegistration:(id)a0;
- (void)updateToolbarIfNeeded;

@end
