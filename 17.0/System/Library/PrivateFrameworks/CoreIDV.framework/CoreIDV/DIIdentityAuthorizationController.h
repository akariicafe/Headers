@class _TtC7CoreIDV25DigitalPresentmentSession;

@interface DIIdentityAuthorizationController : NSObject

@property (retain, nonatomic) _TtC7CoreIDV25DigitalPresentmentSession *session;

- (id)init;
- (void)cancelRequest;
- (void).cxx_destruct;
- (void)checkCanRequestDocument:(id)a0 completion:(id /* block */)a1;
- (void)requestDocument:(id)a0 completion:(id /* block */)a1;

@end
