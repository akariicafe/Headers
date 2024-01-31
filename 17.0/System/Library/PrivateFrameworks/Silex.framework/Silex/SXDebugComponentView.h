@protocol SXLayoutInvalidator;

@interface SXDebugComponentView : SXComponentView

@property (readonly, nonatomic) id<SXLayoutInvalidator> invalidator;

- (void).cxx_destruct;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 invalidator:(id)a4;
- (void)loadComponent:(id)a0;

@end
