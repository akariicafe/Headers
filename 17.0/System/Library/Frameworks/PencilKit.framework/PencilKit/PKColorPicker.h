@class UIColor, _PKColorPickerView;
@protocol PKColorPickerDelegate;

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate>

@property (retain, nonatomic) _PKColorPickerView *colorPickerView;
@property (weak, nonatomic) id<PKColorPickerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (nonatomic) long long colorUserInterfaceStyle;

+ (id)_representableColorForColor:(id)a0;

- (id)init;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_colorPickerView;
- (void)_colorPickerViewDidChangeSelectedColor:(id)a0;
- (void)_colorPickerViewUserDidTouchUpInside:(id)a0;
- (void)_setInitialColorForSpringLoading:(id)a0;
- (void)_setSelectedColorForPoint:(struct CGPoint { double x0; double x1; })a0;

@end
