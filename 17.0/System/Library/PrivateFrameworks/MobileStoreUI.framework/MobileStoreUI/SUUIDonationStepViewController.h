@class SUUIGiftCharity, NSOperationQueue, SUUIDonationConfiguration, SUUIDonationViewController;

@interface SUUIDonationStepViewController : UIViewController

@property (readonly, nonatomic) SUUIGiftCharity *charity;
@property (readonly, nonatomic) SUUIDonationConfiguration *donationConfiguration;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (readonly, nonatomic) SUUIDonationViewController *donationViewController;

- (void).cxx_destruct;
- (id)initWithCharity:(id)a0 configuration:(id)a1;

@end
