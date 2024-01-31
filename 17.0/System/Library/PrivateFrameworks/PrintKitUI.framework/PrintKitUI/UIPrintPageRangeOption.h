@class UIPrintRangeView, NSString;

@interface UIPrintPageRangeOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) UIPrintRangeView *pageRangeView;
@property (retain, nonatomic) NSString *multiPageRangeTitle;

- (void)dealloc;
- (id)summary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (BOOL)shouldShow;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)pdfChanged:(id)a0;
- (id)printOptionDetailView;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
