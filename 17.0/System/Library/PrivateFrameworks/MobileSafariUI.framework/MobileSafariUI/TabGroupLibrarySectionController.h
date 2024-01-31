@interface TabGroupLibrarySectionController : LibrarySectionController {
    BOOL _showNamedGroups;
}

- (id)itemControllers;
- (id)_allItemControllers;
- (id)initWithConfiguration:(id)a0 forNamedGroups:(BOOL)a1;
- (id)itemControllerToHandleDropItemsFromSession:(id)a0 withProposedDestinationItemController:(id)a1 atIndex:(long long)a2;

@end
