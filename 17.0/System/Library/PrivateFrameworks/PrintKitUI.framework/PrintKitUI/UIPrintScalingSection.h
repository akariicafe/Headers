@class UIPrintScaleToFitOption, UIPrintScaleDownOnlyOption;

@interface UIPrintScalingSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrintScaleToFitOption *scaleToFitPrintOption;
@property (retain, nonatomic) UIPrintScaleDownOnlyOption *scaleDownOnlyPrintOption;

- (void).cxx_destruct;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)scaleToFitChanged;
- (BOOL)updatePrintOptionsList;

@end
