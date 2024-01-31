@interface NewsSubscription.BundleSoftPaywallViewProvider : NSObject <UITextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ bundleSoftPaywallView;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ images;
    void /* unknown type, empty encoding */ badgeImages;
    void /* unknown type, empty encoding */ videoFileURL;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
