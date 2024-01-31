@interface DKPresenter : NSObject

+ (void)presentInSettings;
+ (void)presentUsingParentViewController:(id)a0;
+ (void)presentUsingParentViewController:(id)a0 completion:(id /* block */)a1;
+ (void)presentUsingParentViewController:(id)a0 configuration:(id)a1 completion:(id /* block */)a2;
+ (void)presentUsingParentViewController:(id)a0 configuration:(id)a1 willPresent:(id /* block */)a2 completion:(id /* block */)a3;

@end
