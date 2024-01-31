@class UIViewController;

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController

@property (retain, nonatomic) UIViewController *colorPickerViewController;

- (id)viewController;
- (id)init;
- (id)selectedColor;
- (void).cxx_destruct;
- (BOOL)supportsAlpha;
- (long long)colorUserInterfaceStyle;

@end
