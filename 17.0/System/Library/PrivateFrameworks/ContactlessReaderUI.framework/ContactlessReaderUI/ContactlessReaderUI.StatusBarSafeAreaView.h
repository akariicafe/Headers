@interface ContactlessReaderUI.StatusBarSafeAreaView : UIViewController <_UIViewBoundingPathChangeObserver> {
    void /* unknown type, empty encoding */ safeRect;
    void /* unknown type, empty encoding */ idealSize;
    void /* unknown type, empty encoding */ maxAllowedSize;
    void /* unknown type, empty encoding */ corner;
    void /* unknown type, empty encoding */ cornerRadii;
    void /* unknown type, empty encoding */ boundingRectRequiresUpdate;
}

- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;

@end
