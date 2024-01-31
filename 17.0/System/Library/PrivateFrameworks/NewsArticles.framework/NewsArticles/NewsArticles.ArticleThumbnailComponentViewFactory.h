@class NSString;

@interface NewsArticles.ArticleThumbnailComponentViewFactory : SXComponentViewFactory {
    void /* unknown type, empty encoding */ renderingView;
    void /* unknown type, empty encoding */ resolver;
    void /* unknown type, empty encoding */ linkedContentProvider;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) int role;

- (id)componentViewForComponent:(id)a0;
- (void).cxx_destruct;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3;

@end
