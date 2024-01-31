@class PKPhysicalCardArtworkOption, NSString, PKOrderPhysicalCardController, PKOrderPhysicalCardHeroView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKOrderPhysicalCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKViewControllerPreflightable> {
    long long _context;
    PKOrderPhysicalCardController *_controller;
    unsigned long long _featureIdentifier;
    NSString *_nameOnCard;
    PKPhysicalCardArtworkOption *_artworkOption;
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;
    BOOL _unavailableToOrder;
}

@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *titleOverride;
@property (copy, nonatomic) NSString *bodyOverride;
@property (copy, nonatomic) NSString *primaryButtonTitleOverride;
@property (copy, nonatomic) NSString *secondaryButtonTitleOverride;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (id)initWithController:(id)a0;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_handleNextStep;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;

@end
