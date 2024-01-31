@class UIPrinter;
@protocol UIPrinterPickerControllerDelegate;

@interface UIPrinterPickerController : NSObject {
    id /* block */ _completionHandler;
    id _state;
}

@property (retain, nonatomic) UIPrinter *selectedPrinter;
@property (weak, nonatomic) id<UIPrinterPickerControllerDelegate> delegate;

+ (id)printerPickerControllerWithInitiallySelectedPrinter:(id)a0;

- (BOOL)presentAnimated:(BOOL)a0 hostingScene:(id)a1 completionHandler:(id /* block */)a2;
- (void)dismissAnimated:(BOOL)a0;
- (BOOL)presentFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)presentFromBarButtonItem:(id)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)presentAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_delegateFiltersPrinters;
- (void)_printerPickerDidDismiss;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (BOOL)_setupPickerPanel:(id /* block */)a0;
- (BOOL)_shouldShowPrinter:(id)a0;
- (id)initWithInitiallySelectedPrinter:(id)a0;

@end
