@interface PaperKit.FormFillingView : UIView {
    void /* unknown type, empty encoding */ canvas;
    void /* unknown type, empty encoding */ _formFields;
    void /* unknown type, empty encoding */ formFieldGroups;
    void /* unknown type, empty encoding */ widgets;
    void /* unknown type, empty encoding */ tapGesture;
    void /* unknown type, empty encoding */ vkcFormRegions;
    void /* unknown type, empty encoding */ vkcAnalysis;
    void /* unknown type, empty encoding */ preferredTextContentTypes;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)tap:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithCoder:(id)a0;

@end
