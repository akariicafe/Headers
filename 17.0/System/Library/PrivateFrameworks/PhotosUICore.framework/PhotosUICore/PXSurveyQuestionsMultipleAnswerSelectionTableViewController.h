@class PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource, UIBarButtonItem;

@interface PXSurveyQuestionsMultipleAnswerSelectionTableViewController : UITableViewController

@property (retain, nonatomic) PXSurveyQuestionsMultipleAnswerSelectionTableViewDataSource *dataSource;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UIBarButtonItem *doneButton;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_handleCancel;
- (void)_handleDone;
- (void)_setupNavigationBar:(id)a0 message:(id)a1;
- (id)initWithTitle:(id)a0 message:(id)a1 reasons:(id)a2 currentlySelectedReasons:(id)a3 completion:(id /* block */)a4;

@end
