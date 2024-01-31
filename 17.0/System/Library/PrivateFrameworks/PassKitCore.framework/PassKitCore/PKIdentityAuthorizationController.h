@class DIIdentityAuthorizationController;

@interface PKIdentityAuthorizationController : NSObject

@property (retain, nonatomic) DIIdentityAuthorizationController *wrapped;

- (id)init;
- (void)cancelRequest;
- (void).cxx_destruct;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end
