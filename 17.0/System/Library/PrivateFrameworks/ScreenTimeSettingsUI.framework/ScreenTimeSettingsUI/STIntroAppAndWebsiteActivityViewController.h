@class STIntroductionViewModel;

@interface STIntroAppAndWebsiteActivityViewController : OBWelcomeController

@property (readonly) STIntroductionViewModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void)loadView;
- (void).cxx_destruct;
- (void)_setUpLater:(id)a0;
- (void)_turnOnAppAndWebsiteActivity:(id)a0;
- (id)initWithIntroductionModel:(id)a0 childName:(id)a1 continueHandler:(id /* block */)a2;

@end
