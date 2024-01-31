@protocol FPUIAuthenticationServerRepresentation, FPUIAuthenticationServerInfoDelegate;

@interface FPUIAuthenticationServerInfoViewController : FPUIAuthenticationTableViewController {
    id<FPUIAuthenticationServerRepresentation> _serverRepresentation;
}

@property (weak, nonatomic) id<FPUIAuthenticationServerInfoDelegate> serverInfoDelegate;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canPerformAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (void)tableView:(id)a0 performAction:(SEL)a1 forRowAtIndexPath:(id)a2 withSender:(id)a3;
- (BOOL)tableView:(id)a0 shouldShowMenuForRowAtIndexPath:(id)a1;
- (id)defaultLeftBarButtonItem;
- (id)initWithServerRepresentation:(id)a0;
- (void)removeButtonTapped:(id)a0;
- (void)setupTableViewSections;

@end
