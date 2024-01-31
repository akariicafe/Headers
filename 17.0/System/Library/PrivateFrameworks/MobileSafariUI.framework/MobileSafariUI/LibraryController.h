@class UIViewController, NSString, LibraryViewController, NSMutableDictionary, LibraryItemController, MainLibrarySectionController, LibraryConfiguration;
@protocol SidebarUIProxy;

@interface LibraryController : NSObject <LibraryItemRegistration, UINavigationControllerDelegate, LibraryViewControllerDelegate> {
    NSMutableDictionary *_itemsByCollection;
    LibraryItemController *_lastSelectedItemController;
    UIViewController *_viewControllerForLastSelectedItemController;
    MainLibrarySectionController *_mainLibrarySectionController;
}

@property (readonly, nonatomic) LibraryConfiguration *configuration;
@property (retain, nonatomic) id<SidebarUIProxy> sidebarUIProxy;
@property (retain, nonatomic) LibraryViewController *sidebarViewController;
@property (copy, nonatomic) NSString *currentCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_reportSelectedItemForAnalytics:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)libraryViewController:(id)a0 didSelectItem:(id)a1;
- (void)_updateSidebarButton;
- (void)libraryViewControllerDidClearSelection:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)reloadExpansionStateForTabGroup:(id)a0;
- (BOOL)libraryViewController:(id)a0 shouldPersistSelectionForItem:(id)a1;
- (void)registerItem:(id)a0 forCollectionType:(id)a1;
- (void)browserViewControllerDidChangeSidebarStyle;

@end
