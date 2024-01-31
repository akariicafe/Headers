@interface HealthExperienceUI.CoreTextView : UIView {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ attributedText;
    void /* unknown type, empty encoding */ columns;
    void /* unknown type, empty encoding */ linksEnabled;
    void /* unknown type, empty encoding */ linkColor;
    void /* unknown type, empty encoding */ sizingStrategy;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapRecognizer;
    void /* unknown type, empty encoding */ gutter;
    void /* unknown type, empty encoding */ lastTypesettingResult;
}

@property (nonatomic) long long accessibilityContainerType;
@property (nonatomic) BOOL isAccessibilityElement;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)onLinkTap:(id)a0;

@end
