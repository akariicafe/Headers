@class WFContentItem, NSString;

@interface WFContentItemViewController : UITableViewController <UIDocumentInteractionControllerDelegate>

@property (readonly, nonatomic) WFContentItem *contentItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithContentItem:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;

@end
