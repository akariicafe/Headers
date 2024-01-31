@class CUMessageSession, UIViewController;

@interface PASUIDependentViewPresenter : NSObject {
    void /* unknown type, empty encoding */ flowController;
    void /* unknown type, empty encoding */ navigationController;
    void /* unknown type, empty encoding */ flowTimer;
    void /* unknown type, empty encoding */ _messageSessionProvider;
    void /* unknown type, empty encoding */ _authenticator;
    void /* unknown type, empty encoding */ _deviceProvider;
    void /* unknown type, empty encoding */ _dependentAppleIDExchanger;
    void /* unknown type, empty encoding */ _analyticsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_analytics;
    void /* unknown type, empty encoding */ _featureFlagsProvider;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) BOOL shouldSignInForSelf;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(UIViewController *))a1;
- (id)initWithParentViewController:(id)a0;
- (void)activateWithTemplateMessageSession:(CUMessageSession *)a0 completionHandler:(void (^)(void))a1;
- (void)startFlowWithNavigationController:(id)a0;
- (void)setTemplateMessageSession:(CUMessageSession *)a0 completion:(void (^)(void))a1;
- (void)startFlowWithContainerViewController:(id)a0;

@end
