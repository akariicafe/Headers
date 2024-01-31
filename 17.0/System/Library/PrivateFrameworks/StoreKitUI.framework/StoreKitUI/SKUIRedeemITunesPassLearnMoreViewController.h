@class NSString, SKUIPassbookLoader, NSURL, SKUIRedeemITunesPassLearnMoreView;

@interface SKUIRedeemITunesPassLearnMoreViewController : SKUIRedeemStepViewController <SKUIPassbookLoaderDelegate> {
    BOOL _didTapAddPassbookButton;
    SKUIRedeemITunesPassLearnMoreView *_learnMoreView;
    SKUIPassbookLoader *_passbookLoader;
    NSURL *_passbookURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)dealloc;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_didLoadPassbookURLString:(id)a0;
- (void)_doneButtonAction:(id)a0;
- (id)_existingPass;
- (void)_loadPassbookPass;
- (void)_loadPassbookURL;
- (void)_passButtonAction:(id)a0;
- (void)_showErrorDialog;
- (void)passbookLoaderDidFinish:(id)a0;
- (id)presentationViewControllerForPassbookLoader:(id)a0;

@end
