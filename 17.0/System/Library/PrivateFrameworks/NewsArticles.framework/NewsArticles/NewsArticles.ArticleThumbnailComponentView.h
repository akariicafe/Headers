@interface NewsArticles.ArticleThumbnailComponentView : SXComponentView {
    void /* unknown type, empty encoding */ linkedContentProvider;
    void /* unknown type, empty encoding */ articleThumbnailViewRenderer;
    void /* unknown type, empty encoding */ articleThumbnailView;
}

- (void)discardContents;
- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;

@end
