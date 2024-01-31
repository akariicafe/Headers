@class SKUIRedeemITunesPassLockup, NSString, UIImageView, UIBarButtonItem, SKUIRedeemTextField;

@interface SKUIRedeemInputViewController : SKUIRedeemStepViewController <UITextFieldDelegate> {
    SKUIRedeemTextField *_field;
    UIImageView *_imageView;
    SKUIRedeemITunesPassLockup *_passbookLockup;
    UIBarButtonItem *_redeemButton;
}

@property (readonly, nonatomic) long long category;
@property (copy, nonatomic) NSString *initialCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void).cxx_destruct;
- (void)_cancelAction:(id)a0;
- (void)_textFieldTextDidChange:(id)a0;
- (id)initWithRedeemCategory:(long long)a0;
- (id)_newTextFieldWithClientContext:(id)a0;
- (void)_passbookLockupAction:(id)a0;
- (void)_redeemAction:(id)a0;
- (void)_redeemConfigurationImagesDidLoad:(id)a0;
- (void)_termsButtonAction:(id)a0;
- (void)_toggleActivityIndicatorBarButtonItem:(BOOL)a0;

@end
