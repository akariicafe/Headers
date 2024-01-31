@class STIntroductionViewModel;

@interface STIntroCommunicationSafetyViewController : OBWelcomeController

@property (readonly) STIntroductionViewModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void)loadView;
- (void).cxx_destruct;
- (void)_openCommunicationSafetyLearnMoreLink;
- (void)_turnOnCommunicationSafety:(id)a0;
- (id)initWithIntroductionModel:(id)a0 childName:(id)a1 continueHandler:(id /* block */)a2;

@end
