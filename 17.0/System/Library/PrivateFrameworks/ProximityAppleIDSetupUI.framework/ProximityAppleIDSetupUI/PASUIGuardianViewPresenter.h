@class CUMessageSession, UIViewController;

@interface PASUIGuardianViewPresenter : NSObject {
    void /* unknown type, empty encoding */ parentViewController;
    void /* unknown type, empty encoding */ flowController;
    void /* unknown type, empty encoding */ cardContentView;
    void /* unknown type, empty encoding */ cardAdapter;
    void /* unknown type, empty encoding */ flowTimer;
    void /* unknown type, empty encoding */ _messageSessionProvider;
    void /* unknown type, empty encoding */ _authenticator;
    void /* unknown type, empty encoding */ _viewControllerProvider;
    void /* unknown type, empty encoding */ _analyticsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analytics;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(UIViewController *))a1;
- (id)initWithSharingViewController:(id)a0;
- (void)setTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(void))a1;

@end
