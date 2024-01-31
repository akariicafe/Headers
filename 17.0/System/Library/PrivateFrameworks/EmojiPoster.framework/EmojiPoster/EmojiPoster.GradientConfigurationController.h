@interface EmojiPoster.GradientConfigurationController : UIViewController <UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ type;
    void /* unknown type, empty encoding */ gradientProperties;
    void /* unknown type, empty encoding */ editingLinearGradientProperties;
    void /* unknown type, empty encoding */ editingRadialGradientProperties;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ verticalStackView;
    void /* unknown type, empty encoding */ styleSegmentedControl;
    void /* unknown type, empty encoding */ colorSlider;
    void /* unknown type, empty encoding */ attributeSlider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_colorPicker;
    void /* unknown type, empty encoding */ colorUpdater;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)attributeSliderValueChangedWithSlider:(id)a0;

@end
