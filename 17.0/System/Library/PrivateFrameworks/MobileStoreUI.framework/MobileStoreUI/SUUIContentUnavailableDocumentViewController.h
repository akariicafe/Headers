@class SUUIContentUnavailableTemplateElement, NSString, SUUIContentUnavailableView, SUUILayoutCache, SUUIViewElementLayoutContext;

@interface SUUIContentUnavailableDocumentViewController : SUUIViewController <SUUIArtworkRequestDelegate, SUUILayoutCacheDelegate, SUUIDocumentViewController> {
    SUUIContentUnavailableView *_contentUnavailableView;
    SUUIViewElementLayoutContext *_layoutContext;
    SUUIContentUnavailableTemplateElement *_templateElement;
    SUUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_contentInsets;
- (id)_layoutContext;
- (void)_reloadContentUnavailableView:(id)a0 width:(double)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (void)layoutCacheDidFinishBatch:(id)a0;

@end
