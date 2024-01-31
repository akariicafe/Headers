@class SUUISignInTemplateViewElement, NSString, SUUILayoutCache, SUUISignInTemplateView, SUUIViewElementLayoutContext, UIScrollView;

@interface SUUISignInDocumentViewController : SUUIViewController <SUUIArtworkRequestDelegate, SUUILayoutCacheDelegate, SUUISignInViewDelegate, SUUIDocumentViewController> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    SUUIViewElementLayoutContext *_layoutContext;
    SUUISignInTemplateView *_loginView;
    UIScrollView *_scrollView;
    SUUISignInTemplateViewElement *_templateElement;
    SUUILayoutCache *_textLayoutCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_keyboardWillChangeFrame:(id)a0;
- (id)_backgroundColor;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)_layoutScrollView;
- (void)_keyboardWillShow:(id)a0;
- (void)loadView;
- (void)_keyboardWillHide:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)_layoutContext;
- (void)_signInSuccess:(id)a0;
- (void)_reloadContentSize;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)_signInFailed:(id)a0 error:(id)a1;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (void)documentDidUpdate:(id)a0;
- (id)initWithTemplateElement:(id)a0;
- (void)layoutCacheDidFinishBatch:(id)a0;
- (void)signInEntryComplete:(id)a0 accountName:(id)a1 password:(id)a2;

@end
