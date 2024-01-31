@class NSArray, NSMutableSet, NSString;

@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource : NSObject <UITableViewDataSource>

@property (readonly, nonatomic) NSArray *promotedReasons;
@property (readonly, nonatomic) NSArray *otherReasons;
@property (readonly, nonatomic) NSMutableSet *currentlySelectedReasons;
@property (readonly, nonatomic) long long selectedReasonsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)select:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (id)selectedReasons;
- (BOOL)canSelectReason:(id)a0;
- (void)deselect:(id)a0;
- (id)initWithReasons:(id)a0 currentlySelected:(id)a1;
- (void)setupOtherReasons:(id)a0;
- (void)setupPromotedReasons:(id)a0;

@end
