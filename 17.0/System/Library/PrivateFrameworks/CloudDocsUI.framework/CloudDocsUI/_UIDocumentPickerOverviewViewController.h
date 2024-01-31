@class NSArray;
@protocol _UIDocumentPickerOverviewDelegate;

@interface _UIDocumentPickerOverviewViewController : _UIContainerHuggingTableViewController

@property (retain, nonatomic) NSArray *allPickers;
@property (retain, nonatomic) NSArray *auxiliaryOptions;
@property (retain, nonatomic) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) BOOL manage;
@property (weak, nonatomic) id<_UIDocumentPickerOverviewDelegate> delegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updatePreferredContentSize;
- (void).cxx_destruct;
- (void)setPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)updateContents;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithFileTypes:(id)a0 mode:(unsigned long long)a1 auxiliaryOptions:(id)a2 includeManagementItem:(BOOL)a3;

@end
