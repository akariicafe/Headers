@class UIViewController, TSSStylesheet;

@interface SXTextTangierDocumentRoot : TSKDocumentRoot

@property (readonly, nonatomic) TSSStylesheet *aStylesheet;
@property (weak, nonatomic) UIViewController *viewController;

- (id)init;
- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)stylesheet;

@end
