@interface HealthExperienceUI.ActivityIndicatorDetailView : UIView <UITextViewDelegate> {
    void /* unknown type, empty encoding */ activityIndicatorView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailTextView;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ titleLeadingAnchor;
    void /* unknown type, empty encoding */ titleTopOrCenterAnchor;
    void /* unknown type, empty encoding */ detailTextViewTopAnchor;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
