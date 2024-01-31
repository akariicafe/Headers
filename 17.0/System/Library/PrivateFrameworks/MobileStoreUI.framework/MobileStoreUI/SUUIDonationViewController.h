@class NSString, SUUIClientContext, NSOperationQueue, SUUIDonationConfiguration, UIViewController;

@interface SUUIDonationViewController : UINavigationController {
    SUUIDonationConfiguration *_donationConfiguration;
    UIViewController *_placeholderViewController;
}

@property (readonly, nonatomic) NSString *charityIdentifier;
@property (retain, nonatomic) SUUIClientContext *clientContext;
@property (retain, nonatomic) NSOperationQueue *operationQueue;

- (id)initWithURL:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)a0;
- (void)_configurationDidLoadWithResult:(BOOL)a0 error:(id)a1;
- (void)_finishAuthenticateWithResponse:(id)a0 error:(id)a1;
- (void)_loadDonationConfiguration;
- (id)initWithCharityIdentifier:(id)a0;
- (id)_initSUUIDonationViewController;

@end
