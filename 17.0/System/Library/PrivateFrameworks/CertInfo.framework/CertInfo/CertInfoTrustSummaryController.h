@class UITableViewCell, UIBarButtonItem;
@protocol CertInfoTrustSummaryControllerDelegate, CertInfoTrustDescription;

@interface CertInfoTrustSummaryController : UITableViewController {
    id<CertInfoTrustDescription> _description;
    UIBarButtonItem *_doneButton;
    UITableViewCell *_headerCell;
    UITableViewCell *_descriptionCell;
    unsigned char _showsDoneButton : 1;
}

@property (weak, nonatomic) id<CertInfoTrustSummaryControllerDelegate> delegate;
@property (nonatomic) BOOL showsDoneButton;

- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_actionButtonPressed:(id)a0;
- (void)_doneButtonPressed:(id)a0;
- (id)_headerCell;
- (id)_cellForReuseIdentifier:(id)a0;
- (id)_descriptionCell;
- (id)initWithTrustDescription:(id)a0;
- (void)setActionButtonTitle:(id)a0 destructive:(BOOL)a1 animated:(BOOL)a2;

@end
