@class NSString, PKPayLaterMoreInformationSectionController;

@interface PKPayLaterMoreInformationViewController : PKPayLaterSetupViewController <PKPayLaterSectionControllerDelegate> {
    PKPayLaterMoreInformationSectionController *_sectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithSetupFlowController:(id)a0;
- (void)nextButtonTapped;

@end
