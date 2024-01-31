@protocol FANavigationControllerDelegate;

@interface FANavigationController : UINavigationController

@property (weak, nonatomic) id<FANavigationControllerDelegate> familyDelegate;

- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (BOOL)_isEmpty;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;

@end
