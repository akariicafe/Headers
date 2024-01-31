@class UIPrintFinishingsOption;

@interface UIPrintFinishingOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintFinishingsOption *finishingPrintOption;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)currentPrinterChanged;
- (void)didSelectPrintOptionSection;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (BOOL)updatePrintOptionsList;

@end
