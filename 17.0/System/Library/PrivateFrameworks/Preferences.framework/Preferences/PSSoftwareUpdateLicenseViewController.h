@class NSString, UITextView;

@interface PSSoftwareUpdateLicenseViewController : PSViewController

@property (retain, nonatomic) NSString *licenseTextInfo;
@property (retain, nonatomic) UITextView *licenseTextView;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void)didReceiveMemoryWarning;
- (void).cxx_destruct;
- (void)setLicenseText:(id)a0;
- (id)initWithLicense:(id)a0;

@end
