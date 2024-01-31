@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularStackSwiftUIView : NTKRichComplicationCircularStackContentTextView {
    CDComplicationHostingView *_line1SwiftUIView;
}

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)line1View;
- (id)line2TextProviderFromTemplate:(id)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
