@class UIColor, PKColorPicker, NSString;
@protocol MFComposeColorPickerControllerDelegate;

@interface MFComposeColorPickerController : UIViewController <PKColorPickerDelegate>

@property (retain, nonatomic) PKColorPicker *colorPicker;
@property (nonatomic) BOOL shouldShowTitleBar;
@property (weak, nonatomic) id<MFComposeColorPickerControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *selectedColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)loadView;
- (void).cxx_destruct;
- (void)closeColorPicker:(id)a0;
- (void)colorPickerDidChangeSelectedColor:(id)a0;
- (id)initWithSelectedColor:(id)a0 shouldShowTitleBar:(BOOL)a1;

@end
