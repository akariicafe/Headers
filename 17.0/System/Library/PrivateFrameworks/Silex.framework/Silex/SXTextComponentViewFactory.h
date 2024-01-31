@class SXTangierController;

@interface SXTextComponentViewFactory : SXComponentViewFactory

@property (readonly, weak, nonatomic) SXTangierController *tangierController;

- (int)role;
- (void).cxx_destruct;
- (id)type;
- (id)componentViewForComponent:(id)a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegateProvider:(id)a2 componentStyleRendererFactory:(id)a3 tangierController:(id)a4;

@end
