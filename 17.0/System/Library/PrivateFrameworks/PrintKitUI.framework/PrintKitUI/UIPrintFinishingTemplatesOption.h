@class UITableView, NSString, UIPrintInfo, UITableViewCell, NSMutableArray, UIPrintPanelViewController;

@interface UIPrintFinishingTemplatesOption : NSObject <UIPrintOptionListDelegate>

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (weak, nonatomic) UITableView *finishingOptionsTableView;
@property (retain, nonatomic) NSMutableArray *finishingTemplateNames;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (nonatomic) long long selectedTemplate;
@property (retain, nonatomic) UITableViewCell *finishingTemplatesCell;
@property (retain, nonatomic) NSString *summary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)title;
- (id)itemList;
- (id)selectedItem;
- (BOOL)shouldShow;
- (long long)listItemSelected:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1 finishingOptionsTableView:(id)a2;
- (void)updateFromPrintInfo;

@end
