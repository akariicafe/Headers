@class NSString, SUUILayoutCache, SUUIModernChartsView, SUUIActivityIndicatorView, SUUIResourceLoader, SUUIViewElementLayoutContext, NSMutableArray, SUUIChartsTemplateViewElement;

@interface SUUIModernChartsDocumentViewController : SUUIViewController <SUUIResourceLoaderDelegate, SUUIDocumentViewController, SUUIModalSourceViewProvider> {
    SUUIActivityIndicatorView *_activityIndicatorView;
    SUUIModernChartsView *_chartsView;
    NSMutableArray *_columnViewControllers;
    SUUILayoutCache *_layoutCache;
    SUUIChartsTemplateViewElement *_templateElement;
    SUUIViewElementLayoutContext *_viewLayoutContext;
    SUUIResourceLoader *_resourceLoader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (id)contentScrollView;
- (void)loadView;
- (void).cxx_destruct;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInset;
- (void)_showActivityIndicator;
- (id)_resourceLoader;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedFrameForActivityIndicatorView;
- (void)_hideActivityIndicator;
- (id)_layoutCache;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)a0;
- (void)_reloadWithTemplateElement:(id)a0;
- (id)_viewLayoutContext;
- (void)documentDidUpdate:(id)a0;
- (void)documentMediaQueriesDidUpdate:(id)a0;
- (void)getModalSourceViewForElementIdentifier:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithTemplateElement:(id)a0;
- (void)resourceLoader:(id)a0 didLoadAllForReason:(long long)a1;
- (void)resourceLoaderDidBeginLoading:(id)a0;

@end
