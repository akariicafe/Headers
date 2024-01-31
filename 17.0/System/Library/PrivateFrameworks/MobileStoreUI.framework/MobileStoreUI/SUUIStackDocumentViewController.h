@class NSString, NSArray, IKAppDocument, SUUIStorePageSectionsViewController, SUUIResourceLoader, SUUIIndexBarControlController, SUUIStackTemplateElement, NSMapTable;

@interface SUUIStackDocumentViewController : SUUIViewController <SUUIIndexBarControlControllerDataSource, SUUIIndexBarControlControllerDelegate, SUUIIndexBarEntryListControllerDelegate, SUUIModalSourceViewProvider, SUUIViewControllerTesting, SUUICollectionViewPullToRefreshDelegate, SUUIStorePageSectionsDelegate, SUUIResourceLoaderDelegate, SUUIDocumentViewController> {
    IKAppDocument *_document;
    NSArray *_entryListControllers;
    BOOL _hasResetState;
    SUUIIndexBarControlController *_indexBarControlController;
    long long _lastNeedsMoreCount;
    long long _layoutStyle;
    SUUIResourceLoader *_resourceLoader;
    SUUIStackTemplateElement *_templateElement;
    NSMapTable *_viewElementToEntryListController;
}

@property (readonly, nonatomic) SUUIStorePageSectionsViewController *sectionsViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;

- (void)dealloc;
- (void)_resetState;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)_resourceLoader;
- (id)_colorScheme;
- (long long)_maxGlobalIndex;
- (void)documentDidUpdate:(id)a0 withTemplate:(id)a1;
- (void)_configureIndexBarControl:(id)a0;
- (long long)_globalIndexFromIndexPath:(id)a0;
- (id)_indexBarControlController;
- (id)_indexBarViewElement;
- (id)_indexPathFromGlobalIndex:(long long)a0;
- (id)_pageComponentsWithViewElements:(id)a0;
- (id)_pageSplitsDescription;
- (long long)_pinningTransitionStyle;
- (id)_pullToRefreshElement;
- (void)_resetStateForDocumentNotification:(id)a0;
- (BOOL)_shouldShowIndexBar;
- (BOOL)_tryToScrollToSectionAtIndexPath:(id)a0;
- (void)_updateEntryListControllersWithReload:(BOOL)a0;
- (void)_updateIndexBarVisibility;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)getModalSourceViewForElementIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)impressionableViewElements;
- (void)indexBarControlController:(id)a0 didSelectEntryDescriptorAtIndexPath:(id)a1;
- (id)indexBarControlController:(id)a0 entryDescriptorAtIndexPath:(id)a1;
- (long long)indexBarControlController:(id)a0 numberOfEntryDescriptorsInSection:(long long)a1;
- (void)indexBarControlControllerDidSelectBeyondBottom:(id)a0;
- (void)indexBarControlControllerDidSelectBeyondTop:(id)a0;
- (void)indexBarEntryListControllerDidInvalidate:(id)a0;
- (id)initWithTemplateElement:(id)a0 layoutStyle:(long long)a1;
- (long long)numberOfSectionsInIndexBarControlController:(id)a0;
- (BOOL)performTestWithName:(id)a0 options:(id)a1;
- (void)refresh:(id)a0 refreshControl:(id)a1;
- (void)resourceLoader:(id)a0 didLoadAllForReason:(long long)a1;
- (void)resourceLoaderDidBeginLoading:(id)a0;
- (void)sectionsViewController:(id)a0 willScrollToOffset:(struct CGPoint { double x0; double x1; })a1 visibleRange:(struct SUUIIndexPathRange { long long x0; long long x1; long long x2; long long x3; })a2;
- (void)suui_viewWillAppear:(BOOL)a0;

@end
