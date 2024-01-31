@interface NewsSubscription.AlacartePaywallViewProvider : NSObject <UITextViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataProvider;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ paywallModel;
    void /* unknown type, empty encoding */ paywallView;
    void /* unknown type, empty encoding */ renderer;
    void /* unknown type, empty encoding */ layoutAttributesFactory;
    void /* unknown type, empty encoding */ subscribeButtonTextProvider;
}

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)init;
- (void).cxx_destruct;

@end
