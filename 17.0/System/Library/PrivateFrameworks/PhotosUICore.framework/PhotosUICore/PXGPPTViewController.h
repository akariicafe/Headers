@class PXGLayout, PXGView;

@interface PXGPPTViewController : UIViewController

@property (readonly, nonatomic) PXGLayout *initialLayout;
@property (readonly, nonatomic) PXGView *gridView;

- (void)viewDidLoad;
- (void)_handleDoubleTap:(id)a0;
- (id)initWithLayout:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)animate:(id /* block */)a0 animationRenderingCompletionHandler:(id /* block */)a1 proceedHandler:(id /* block */)a2;

@end
