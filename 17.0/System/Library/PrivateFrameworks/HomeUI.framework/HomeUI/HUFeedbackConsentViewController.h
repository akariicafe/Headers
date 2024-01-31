@class WKWebView;
@protocol HUFeedbackConsentViewControllerDelegate;

@interface HUFeedbackConsentViewController : UIViewController

@property (retain, nonatomic) WKWebView *consentView;
@property (nonatomic) BOOL isFamilyAndFriendsConsent;
@property (retain, nonatomic) id<HUFeedbackConsentViewControllerDelegate> consentDelegate;
@property (nonatomic) BOOL isObservingConsentViewLoading;

- (void)updateViewConstraints;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)htmlString;
- (id)consentFormFilePath;
- (void)didAcceptConsent;
- (void)didDeclineConsent;
- (id)initWithConsentDelegate:(id)a0;

@end
