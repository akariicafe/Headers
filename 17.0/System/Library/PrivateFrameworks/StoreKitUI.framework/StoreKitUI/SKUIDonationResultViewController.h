@class NSString, SKUIDonationResultView, SKUIGiftAmount;

@interface SKUIDonationResultViewController : SKUIDonationStepViewController <SKUIDonationConfigurationObserver> {
    SKUIDonationResultView *_resultView;
}

@property (copy, nonatomic) SKUIGiftAmount *donationAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void).cxx_destruct;
- (void)_doneButtonAction:(id)a0;
- (void)donationConfigurationController:(id)a0 didLoadLogoForCharity:(id)a1;
- (id)initWithCharity:(id)a0 configuration:(id)a1;

@end
