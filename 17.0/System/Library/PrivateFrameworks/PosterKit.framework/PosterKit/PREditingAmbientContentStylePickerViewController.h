@class UIStackView, NSArray, PREditorContentStylePickerConfiguration, PREditingContentStyleItemView, UIScrollView;
@protocol PRPosterContentStyle, PREditingAmbientContentStylePickerViewControllerDelegate;

@interface PREditingAmbientContentStylePickerViewController : UIViewController

@property (retain, nonatomic) NSArray *styleCoordinators;
@property (retain, nonatomic) PREditingContentStyleItemView *selectedItemView;
@property (retain, nonatomic) id<PRPosterContentStyle> selectedContentStyle;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) UIStackView *stackView;
@property (nonatomic) BOOL needsScrollToSelectedItem;
@property (weak, nonatomic) id<PREditingAmbientContentStylePickerViewControllerDelegate> delegate;
@property (readonly, nonatomic) PREditorContentStylePickerConfiguration *stylePickerConfiguration;
@property (readonly, copy, nonatomic) id /* block */ changeHandler;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void).cxx_destruct;
- (void)didSelectStyle:(id)a0;
- (void)didTapContentStyleItemView:(id)a0;
- (id)initWithContentStylePickerConfiguration:(id)a0 width:(double)a1 changeHandler:(id /* block */)a2;
- (void)scrollToSelectedItemAnimated:(BOOL)a0;

@end
