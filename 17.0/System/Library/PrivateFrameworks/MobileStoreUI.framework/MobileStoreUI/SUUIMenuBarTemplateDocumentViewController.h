@class NSMutableDictionary, SUUIScrollingSegmentedController, SUUIMenuBarTemplateElement, SUUILoadingDocumentViewController, SUUIMenuBarViewElementConfiguration, SUUIMenuItemViewElement, SUUIMenuBarSectionsViewController, SUUIViewElement, SUUIDynamicPageSectionIndexMapper, UIView, SUUIHorizontalScrollingContainerViewController, NSString, SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost, UIScrollView;
@protocol SUUIMenuBarViewElement;

@interface SUUIMenuBarTemplateDocumentViewController : SUUIViewController <SUUIHorizontalScrollingContainerViewControllerDelegate, SUUIMenuBarViewElementConfigurationDelegate, SUUIScrollingSegmentedControllerDelegate, SUUIScrollingTabAppearanceStatusObserver, SUUIScrollingTabNestedPagedScrolling, SUUINavigationBarControllerProviding, SUUIDocumentViewController> {
    SUUIMenuBarTemplateDocumentViewControllerEmbeddedPaletteHost *_embeddedPaletteHost;
    SUUIDynamicPageSectionIndexMapper *_dynamicPageSectionIndexMapper;
    NSMutableDictionary *_entityUniqueIdentifierToEntityIndex;
    SUUIHorizontalScrollingContainerViewController *_horizontalScrollingContainerViewController;
    SUUILoadingDocumentViewController *_loadingDocumentViewController;
    SUUIMenuBarSectionsViewController *_menuBarSectionsViewController;
    long long _menuBarStyle;
    SUUIViewElement<SUUIMenuBarViewElement> *_menuBarViewElement;
    SUUIMenuBarViewElementConfiguration *_menuBarViewElementConfiguration;
    SUUIMenuItemViewElement *_pendingSelectedMenuItemViewElement;
    SUUIScrollingSegmentedController *_scrollingSegmentedController;
    struct { double progress; BOOL isBouncingOffTheEdge; } _scrollingTabAppearanceStatus;
    SUUIMenuBarTemplateElement *_templateElement;
}

@property (readonly, nonatomic) UIView *titleView;
@property (readonly, nonatomic) double titleViewHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIScrollView *scrollingTabNestedPagingScrollView;

- (void)dealloc;
- (void)setOperationQueue:(id)a0;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)setClientContext:(id)a0;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (id)_contentViewController;
- (void)_replaceViewControllerAtIndex:(unsigned long long)a0 withViewController:(id)a1;
- (id)_colorScheme;
- (void)_addContentViewController:(id)a0;
- (id)_childViewControllersForMenuItems;
- (id)_dynamicPageSectionIndexMapper;
- (BOOL)_isFirstViewControllerOnNavigationStack;
- (unsigned long long)_menuItemIndexForEntityIndex:(unsigned long long)a0 entityValueProvider:(out id *)a1;
- (id)_newChildViewControllerForEntityAtIndex:(unsigned long long)a0;
- (void)_recordEntityUniqueIdentifier:(id)a0 forEntityIndex:(unsigned long long)a1;
- (void)_reloadContentViewController;
- (void)_removeContentViewController:(id)a0;
- (void)_willDisplayViewControllerAtIndex:(unsigned long long)a0;
- (id)_zoomingShelfPageSplitsDescription;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)horizontalScrollingContainerViewController:(id)a0 willDisplayViewControllerAtIndex:(unsigned long long)a1;
- (id)initWithTemplateElement:(id)a0;
- (void)menuBarViewElementConfiguration:(id)a0 didReplaceDocumentForEntityUniqueIdentifier:(id)a1;
- (void)menuBarViewElementConfiguration:(id)a0 didReplaceDocumentForMenuItemAtIndex:(unsigned long long)a1;
- (void)menuBarViewElementConfiguration:(id)a0 selectMenuItemViewElement:(id)a1 animated:(BOOL)a2;
- (id)navigationBarControllerWithViewElement:(id)a0;
- (id)navigationPaletteView;
- (void)scrollingSegmentedController:(id)a0 willDisplayViewControllerAtIndex:(unsigned long long)a1;
- (void)scrollingTabAppearanceStatusWasUpdated:(struct { double x0; BOOL x1; })a0;
- (id)scrollingTabViewControllerInNestedPagingScrollViewAtPageIndex:(unsigned long long)a0;

@end
