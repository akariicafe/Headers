@interface PaperKit.ValueEditingViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ minValue;
    void /* unknown type, empty encoding */ maxValue;
    void /* unknown type, empty encoding */ currentValue;
    void /* unknown type, empty encoding */ unit;
    void /* unknown type, empty encoding */ contentSize;
    void /* unknown type, empty encoding */ contentViewMargin;
    void /* unknown type, empty encoding */ verticalInterItemSpacing;
    void /* unknown type, empty encoding */ stepperSizeHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_stepper;
    void /* unknown type, empty encoding */ $__lazy_storage_$_slider;
}

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)didChangeSliderValue;
- (void)didChangeStepperValue;
- (void)didFinishChangingSliderValue;
- (void)didStartChangingSliderValue;

@end
