@class UIViewController, SUUIClientContext, NSOperationQueue, SUUIGift, SUUIGiftComposeViewController, SUUIGiftConfiguration;
@protocol SUUIGiftViewControllerDelegate;

@interface SUUIGiftViewController : UINavigationController {
    SUUIGiftConfiguration *_giftConfiguration;
    long long _initialBarStyle;
    UIViewController *_placeholderViewController;
    SUUIGiftComposeViewController *_rootViewController;
}

@property (readonly, copy, nonatomic) SUUIGift *gift;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (weak, nonatomic) id<SUUIGiftViewControllerDelegate> giftDelegate;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_cancelButtonAction:(id)a0;
- (id)_localizedString:(id)a0;
- (void)_clientContextDidLoadWithContext:(id)a0 error:(id)a1;
- (void)_configurationDidLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_finishAuthenticateWithResponse:(id)a0 error:(id)a1;
- (void)_finishGiftingWithResult:(BOOL)a0;
- (void)_loadGiftConfiguration;
- (id)initWithGift:(id)a0;

@end
