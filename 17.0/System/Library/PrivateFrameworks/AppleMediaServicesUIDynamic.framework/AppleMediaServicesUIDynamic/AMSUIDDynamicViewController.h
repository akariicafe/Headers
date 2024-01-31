@class NSDictionary, NSString, UINavigationItem;

@interface AMSUIDDynamicViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate> {
    void /* unknown type, empty encoding */ clientOptions;
    void /* unknown type, empty encoding */ internalClientOptions;
    void /* unknown type, empty encoding */ mediaClientIdentifier;
    void /* unknown type, empty encoding */ metricsOverlay;
    void /* unknown type, empty encoding */ automaticErrorRetry;
    void /* unknown type, empty encoding */ child;
    void /* unknown type, empty encoding */ didInitialSetup;
    void /* unknown type, empty encoding */ preferredSizingModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_childNavigationController;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ preloadingCompletionPromise;
    void /* unknown type, empty encoding */ urlPromise;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ account;
@property (nonatomic) void /* unknown type, empty encoding */ anonymousMetrics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ bag;
@property (nonatomic, retain) void /* unknown type, empty encoding */ clientInfo;
@property (nonatomic, copy) NSDictionary *clientOptions;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ mediaContentDelegate;
@property (nonatomic, copy) NSDictionary *internalClientOptions;
@property (nonatomic, copy) NSString *mediaClientIdentifier;
@property (nonatomic, copy) NSDictionary *metricsOverlay;
@property (nonatomic, readonly) UINavigationItem *navigationItem;
@property (nonatomic, copy) NSString *title;

- (id)animationControllerForDismissedController:(id)a0;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (void)viewDidLoad;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)preload;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)cancelButtonAction;
- (id)initWithBag:(id)a0 URL:(id)a1;
- (id)initWithBag:(id)a0 bagValue:(id)a1;
- (void)legacyPurchaseDidSucceed:(id)a0;
- (void)reloadContentViewImpressionItems;

@end
