@protocol SXIssueCoverViewProvider;

@interface SXIssueCoverComponentViewFactory : SXComponentViewFactory

@property (readonly, nonatomic) id<SXIssueCoverViewProvider> viewProvider;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 viewProvider:(id)a4;

@end
