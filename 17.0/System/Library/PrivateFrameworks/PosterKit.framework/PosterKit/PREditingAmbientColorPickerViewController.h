@class UIStackView, PREditingColorItemView, UIScrollView, PREditorColorPickerConfiguration;

@interface PREditingAmbientColorPickerViewController : UIViewController

@property (retain, nonatomic) PREditingColorItemView *selectedItemView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) BOOL needsScrollToSelectedItem;
@property (readonly, nonatomic) PREditorColorPickerConfiguration *colorPickerConfiguration;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)didSelectColorItem:(id)a0;
- (void)didTapColorItemView:(id)a0;
- (id)initWithColorPickerConfiguration:(id)a0 width:(double)a1 changeHandler:(id /* block */)a2;
- (void)scrollToSelectedItemAnimated:(BOOL)a0;

@end
