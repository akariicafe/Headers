@class UITableView, NSArray, NSString, UIPrintFinishingTemplatesOption;

@interface UIPrintFinishingsOption : UIPrintOption <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UIPrintFinishingTemplatesOption *finishingTemplatesOption;
@property (retain, nonatomic) NSArray *printerFinishingOptions;
@property (retain, nonatomic) UITableView *finishingOptionsTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)summary;
- (id)summaryString;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)title;
- (BOOL)shouldShow;
- (void)clearFinishingOptions;
- (void)currentPrinterChanged;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)updateFromPrintInfo;

@end
