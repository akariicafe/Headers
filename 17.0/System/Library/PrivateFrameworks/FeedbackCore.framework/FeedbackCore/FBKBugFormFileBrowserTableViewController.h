@class DEDAttachmentGroup, NSArray, NSURL, NSString;

@interface FBKBugFormFileBrowserTableViewController : UITableViewController <UIDocumentInteractionControllerDelegate>

@property (retain, nonatomic) DEDAttachmentGroup *group;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSArray *directoryList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0;
- (void)documentInteractionControllerDidEndPreview:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })documentInteractionControllerRectForPreview:(id)a0;
- (id)documentInteractionControllerViewControllerForPreview:(id)a0;
- (id)documentInteractionControllerViewForPreview:(id)a0;
- (id)initWithUrl:(id)a0;

@end
