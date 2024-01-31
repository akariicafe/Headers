@class UIImageView, MKWalletMerchantStylingInfo;

@interface PKMapsMerchantStylingInfoViewController : UIViewController {
    MKWalletMerchantStylingInfo *_stylingInfo;
    UIImageView *_iconImageView;
}

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithStylingInfo:(id)a0;

@end
