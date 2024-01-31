@protocol PKPaletteTextOptionsViewControllerDelegate;

@interface PKPaletteTextOptionsViewController : UIViewController

@property (weak, nonatomic) id<PKPaletteTextOptionsViewControllerDelegate> delegate;

- (void)loadView;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_signatureButtonTouchUpInsideHandler:(id)a0;
- (void)_textButtonTouchUpInsideHandler:(id)a0;

@end
