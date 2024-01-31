@class CSDeviceBlockViewController, CSDeviceUnblockPolicy;

@interface CSDeviceUnblockViewModel : NSObject

@property (weak, nonatomic) CSDeviceBlockViewController *blockViewController;
@property (retain, nonatomic) CSDeviceUnblockPolicy *unblockPolicy;

- (id)titleText;
- (id)iconName;
- (id)_localizedStringForKey:(id)a0;
- (id)cancelButtonText;
- (void).cxx_destruct;
- (void)cancelButtonAction;
- (void)primaryButtonAction;
- (void)secondaryButtonAction;
- (id)_localizedProductName;
- (id)bodySubtitleText;
- (id)bodyTextForTimeout:(id)a0;
- (id)initWithUnblockPolicy:(id)a0 blockViewController:(id)a1;
- (id)primaryButtonText;
- (id)secondaryButtonText;

@end
