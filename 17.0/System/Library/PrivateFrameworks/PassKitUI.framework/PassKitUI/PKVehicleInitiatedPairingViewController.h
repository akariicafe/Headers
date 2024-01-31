@class PKLinkedApplication, NSString, PRXAction, NSURL, NSArray, UIImageView, UILabel, PRXLabel;

@interface PKVehicleInitiatedPairingViewController : PRXCardContentViewController <PKLinkedApplicationObserver> {
    NSURL *_launchURL;
    PRXLabel *_subtitleLabel;
    UILabel *_bodyLabel;
    UIImageView *_artworkView;
    PKLinkedApplication *_linkedApplication;
    PRXAction *_placeholderAction;
    NSArray *_layoutConstraints;
    unsigned long long _referralSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)vehicleInitiatedPairingViewControllerForConfiguration:(id)a0 paymentService:(id)a1 completion:(id /* block */)a2;

- (void)updateViewConstraints;
- (void)loadView;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_configureLinkedApplicationForTerminal:(id)a0;
- (void)_handleEnterCode;
- (void)_handleOpenApp;
- (void)_updateViewState;
- (id)initWithSupportedTerminal:(id)a0 launchURL:(id)a1 referralSource:(unsigned long long)a2;
- (void)linkedApplicationDidChangeState:(id)a0;

@end
