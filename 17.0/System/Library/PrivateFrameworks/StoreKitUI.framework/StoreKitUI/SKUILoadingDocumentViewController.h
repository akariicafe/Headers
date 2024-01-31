@class SKUILoadingTemplateViewElement, NSString, SKUIActivityIndicatorView, SKUIActivityIndicatorViewElement, SKUILayoutCache, NSObject, SKUIViewElementLayoutContext;
@protocol OS_dispatch_source;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {
    SKUIActivityIndicatorViewElement *_activityIndicatorElement;
    SKUIActivityIndicatorView *_activityIndicatorView;
    NSObject<OS_dispatch_source> *_delayTimer;
    SKUILayoutCache *_layoutCache;
    SKUILoadingTemplateViewElement *_templateElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
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
