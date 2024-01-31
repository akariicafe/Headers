@class NSString, WFTrigger, UITableView;
@protocol WFTriggerConfigurationViewControllerDelegate;

@interface WFTriggerConfigurationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFTriggerConfigurationClass>

@property (readonly, nonatomic) unsigned long long mode;
@property (retain, nonatomic) WFTrigger *trigger;
@property (weak, nonatomic) id<WFTriggerConfigurationViewControllerDelegate> delegate;
@property (readonly, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL runImmediately;
@property (nonatomic) BOOL shouldNotify;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewControllerClassForTriggerClass:(Class)a0;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)sections;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)finish;
- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)isModalInPresentation;
- (void)dismiss:(id)a0;
- (id)configureAdditionalCellsIfNeeded:(id)a0 indexPath:(id)a1 sectionInfo:(id)a2;
- (id)customSections;
- (void)didSelectRowAtIndexPath:(id)a0 withSectionInfo:(id)a1;
- (id)initWithTrigger:(id)a0 mode:(unsigned long long)a1;
- (void)notifySwitchChanged:(id)a0;
- (long long)numberOfRowsInSectionWithInfo:(id)a0;
- (id)tableViewCellClasses;
- (id)tableViewHeaderString;
- (void)updateNextButtonEnabledState;

@end
