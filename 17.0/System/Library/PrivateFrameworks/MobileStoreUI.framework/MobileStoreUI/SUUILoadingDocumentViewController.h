@class SUUIViewElementLayoutContext, NSString, SUUIActivityIndicatorViewElement, SUUIActivityIndicatorView, SUUILayoutCache, NSObject, SUUILoadingTemplateViewElement;
@protocol OS_dispatch_source;

@interface SUUILoadingDocumentViewController : SUUIViewController <SUUIDocumentViewController> {
    SUUIActivityIndicatorViewElement *_activityIndicatorElement;
    SUUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SUUILayoutCache *_layoutCache;
    SUUILoadingTemplateViewElement *_templateElement;
    SUUIViewElementLayoutContext *_viewLayoutContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)_activityIndicator;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_showActivityIndicator;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_computedFrameForActivityIndicatorView;
- (id)_layoutCache;
- (void)_reloadViewStyling;
- (id)_viewLayoutContext;
- (void)documentDidUpdate:(id)a0;
- (id)initWithActivityIndicatorElement:(id)a0;
- (id)initWithTemplateElement:(id)a0;

@end
