@class UIPrintBorderOption, UIPrintPagesPerSheetOption, NSString, UIPrintLayoutDirectionOption, UIPrintFlipHorizontalOption, UITableViewController;

@interface UIPrintLayoutSection : UIPrintOptionSection <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UIPrintPagesPerSheetOption *pagesPerSheetPrintOption;
@property (retain, nonatomic) UIPrintLayoutDirectionOption *layoutDirectionPrintOption;
@property (retain, nonatomic) UIPrintBorderOption *borderPrintOption;
@property (retain, nonatomic) UIPrintFlipHorizontalOption *flipHorizontalPrintOption;
@property (retain, nonatomic) UITableViewController *layoutSectionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)didSelectPrintOptionSection;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionAtIndexPath:(id)a0;
- (BOOL)updatePrintOptionsList;

@end
