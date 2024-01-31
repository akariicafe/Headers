@class PinnedTabsManager;
@protocol DownloadOpenHandler, TabGroupProvider, _SFNavigationIntentHandling, BookmarksNavigationControllerDelegate, LinkPreviewProvider, LibraryItemOpenHandler;

@interface LibraryConfiguration : NSObject

@property (weak, nonatomic) id<DownloadOpenHandler> downloadOpenHandler;
@property (weak, nonatomic) id<LinkPreviewProvider> linkPreviewProvider;
@property (weak, nonatomic) id<LibraryItemOpenHandler> libraryItemOpenHandler;
@property (weak, nonatomic) id<TabGroupProvider> tabGroupProvider;
@property (weak, nonatomic) id<_SFNavigationIntentHandling> navigationIntentHandler;
@property (weak, nonatomic) id<BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate;
@property (weak, nonatomic) PinnedTabsManager *pinnedTabsManager;

- (void).cxx_destruct;

@end
