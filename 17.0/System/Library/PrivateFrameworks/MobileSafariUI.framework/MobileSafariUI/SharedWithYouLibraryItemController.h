@class UIViewController;

@interface SharedWithYouLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (id)viewController;
- (BOOL)isSelected;
- (id)accessibilityIdentifier;
- (void).cxx_destruct;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
