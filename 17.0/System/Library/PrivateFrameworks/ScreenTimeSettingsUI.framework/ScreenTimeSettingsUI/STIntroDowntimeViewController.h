@class STIntroductionViewModel, STIntroDowntimeTableViewController;

@interface STIntroDowntimeViewController : STTableWelcomeController

@property (readonly) STIntroductionViewModel *model;
@property (readonly, copy) id /* block */ continueHandler;
@property (retain, nonatomic) STIntroDowntimeTableViewController *tableViewController;

- (void)loadView;
- (void).cxx_destruct;
- (void)_notNow:(id)a0;
- (void)_setDowntime:(id)a0;
- (id)initWithIntroductionModel:(id)a0 continueHandler:(id /* block */)a1;

@end
