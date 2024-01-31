@class UIViewController;

@interface AISAppleIDSignInController : NSObject {
    void /* unknown type, empty encoding */ $__lazy_storage_$_hostingViewController;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ configuration;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, retain) UIViewController *hostingViewController;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)presentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
