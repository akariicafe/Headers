@class NSString, UIPrintInfo, UITableViewCell, UIPrintPanelViewController;

@interface UIPrintOption : NSObject

@property (weak, nonatomic) UIPrintPanelViewController *printPanelViewController;
@property (retain, nonatomic) UITableViewCell *tableViewCell;
@property (retain, nonatomic) UIPrintInfo *printInfo;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *summary;
@property (nonatomic) BOOL collapsed;
@property (nonatomic) BOOL shouldShow;

- (void)dismissKeyboard;
- (void).cxx_destruct;
- (BOOL)canDismiss;
- (BOOL)keyboardShowing;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (void)updatePrintOptionSummary;

@end
