@class NSString, UIViewController;

@interface ICQNDMLiftUIPresenterDelegate : NSObject <ICQLiftUIPresenterDelegate>

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (void)liftUIPresenter:(id)a0 didLoadWithSuccess:(BOOL)a1 error:(id)a2;
- (void)liftUIPresenter:(id)a0 performAction:(long long)a1 parameters:(id)a2 completion:(id /* block */)a3;
- (void)liftUIPresenterDidCancel:(id)a0;
- (void)liftUIPresenterDidComplete:(id)a0;

@end
