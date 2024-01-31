@class STIntroductionViewModel;

@interface STIntroIdentityViewController : OBWelcomeController

@property (readonly) STIntroductionViewModel *model;
@property (readonly, copy) id /* block */ continueHandler;

- (void)loadView;
- (void).cxx_destruct;
- (void)_myChildsDevice:(id)a0;
- (void)_myDevice:(id)a0;
- (id)initWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;

@end
