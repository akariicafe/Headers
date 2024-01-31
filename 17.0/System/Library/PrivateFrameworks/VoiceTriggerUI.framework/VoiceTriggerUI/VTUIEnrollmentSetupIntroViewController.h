@class NSString, VTUIButton;
@protocol VTUISiriIntroViewControllerDelegate;

@interface VTUIEnrollmentSetupIntroViewController : OBWelcomeController {
    id<VTUISiriIntroViewControllerDelegate> _delegate;
    BOOL _showSiriConversations;
    BOOL _isPostUpgradeDisclosure;
    BOOL _includeHomePodInDisclosure;
}

@property (readonly, nonatomic) VTUIButton *laterButton;
@property (readonly, nonatomic) VTUIButton *continueButton;
@property (readonly, copy, nonatomic) NSString *languageCode;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)_setupContent;
- (void)_fadeInSubViews;

@end
