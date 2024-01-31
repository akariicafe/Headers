@class UISwitch;

@interface UIPrintInColorOption : UIPrintOption

@property (retain, nonatomic) UISwitch *printInColorSwitch;
@property (nonatomic) BOOL canShowColor;
@property (nonatomic) long long savedOutputType;

- (void)dealloc;
- (id)summary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)changePrintInColor:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)printInColor;
- (id)printOptionTableViewCell;
- (void)setPrintInColor:(BOOL)a0;
- (void)updateFromPrintInfo;

@end
