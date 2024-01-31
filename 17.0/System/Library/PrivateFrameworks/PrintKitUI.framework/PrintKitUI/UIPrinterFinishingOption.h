@class UITableView, NSString, UIPrintInfo, NSArray, UIPrintOptionCell, UIPrintPanelViewController;

@interface UIPrinterFinishingOption : NSObject <UIPrintOptionListDelegate>

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (weak, nonatomic) UITableView *finishingOptionsTableView;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (nonatomic) long long finishingType;
@property (nonatomic) long long viewType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *optionChoices;
@property (nonatomic) long long selectedChoice;
@property (retain, nonatomic) UIPrintOptionCell *printerFinishingOptionCell;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)summary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)itemList;
- (id)selectedItem;
- (long long)listItemSelected:(id)a0;
- (id)initWithTitle:(id)a0 finishingType:(long long)a1 viewType:(long long)a2 optionChoices:(id)a3 printPanelViewController:(id)a4 finishingOptionsTableView:(id)a5;
- (void)updateFromPrintInfo;
- (void)updateSwitchValue:(id)a0;

@end
