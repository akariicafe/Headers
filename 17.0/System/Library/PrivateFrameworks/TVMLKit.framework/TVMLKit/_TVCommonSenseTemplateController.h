@class IKViewElement, _TVCommonSenseView;

@interface _TVCommonSenseTemplateController : UIViewController

@property (retain, nonatomic) _TVCommonSenseView *commonSenseView;
@property (retain, nonatomic) IKViewElement *templateElement;

- (void)loadView;
- (void).cxx_destruct;
- (id)_infoTableFromElement:(id)a0;
- (void)_loadTemplate;
- (void)_updateFooterWithElement:(id)a0;
- (void)_updateHeaderWithElement:(id)a0;
- (void)updateWithCommonSenseTemplate:(id)a0;

@end
