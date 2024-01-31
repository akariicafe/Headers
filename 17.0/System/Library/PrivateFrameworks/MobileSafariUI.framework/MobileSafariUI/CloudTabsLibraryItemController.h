@class UIViewController;

@interface CloudTabsLibraryItemController : LibraryItemController {
    UIViewController *_viewController;
}

- (id)viewController;
- (BOOL)isSelected;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)updateListContentConfiguration:(id)a0;
- (void)didSelectItem;

@end
