@class UISegmentedControl;

@interface UIPrintOrientationOption : UIPrintOption

@property (retain, nonatomic) UISegmentedControl *orientationSegmentedControl;

- (void)dealloc;
- (id)summary;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)changeOrientation:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
