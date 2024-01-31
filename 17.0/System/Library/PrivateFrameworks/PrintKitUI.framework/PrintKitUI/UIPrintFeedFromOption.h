@class NSArray, NSString, NSIndexPath, NSMutableArray;

@interface UIPrintFeedFromOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSMutableArray *trayNames;
@property (retain, nonatomic) NSArray *trays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)summary;
- (id)summaryString;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (BOOL)shouldShow;
- (long long)listItemSelected:(id)a0;
- (void)currentPrinterChanged;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (id)selectedTrayName;
- (void)updateFromPrintInfo;

@end
