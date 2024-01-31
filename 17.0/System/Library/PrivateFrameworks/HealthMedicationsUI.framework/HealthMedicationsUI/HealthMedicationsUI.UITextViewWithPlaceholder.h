@class NSString;

@interface HealthMedicationsUI.UITextViewWithPlaceholder : UITextView {
    void /* unknown type, empty encoding */ $__lazy_storage_$_placeholderLabel;
    void /* unknown type, empty encoding */ cancellable;
}

@property (nonatomic, copy) NSString *text;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 textContainer:(id)a1;

@end
