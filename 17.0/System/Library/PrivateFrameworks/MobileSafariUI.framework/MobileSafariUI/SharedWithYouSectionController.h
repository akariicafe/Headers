@class CloudTabsLibraryItemController, SharedWithYouLibraryItemController;

@interface SharedWithYouSectionController : LibrarySectionController {
    CloudTabsLibraryItemController *_cloudTabsItemController;
    SharedWithYouLibraryItemController *_friendsItemController;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id)title;
- (id)itemControllers;
- (void)registerItemsWithRegistration:(id)a0;

@end
