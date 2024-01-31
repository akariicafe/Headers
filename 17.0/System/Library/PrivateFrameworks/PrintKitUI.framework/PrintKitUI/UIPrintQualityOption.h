@class NSArray, UIPrintQualityView;

@interface UIPrintQualityOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) NSArray *printQualities;
@property (retain, nonatomic) UIPrintQualityView *printQualityView;
@property (retain, nonatomic) NSArray *qualities;

- (void)dealloc;
- (id)summary;
- (id)summaryString;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)currentPrinterChanged;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (id)shortSummary;
- (void)updateFromPrintInfo;

@end
