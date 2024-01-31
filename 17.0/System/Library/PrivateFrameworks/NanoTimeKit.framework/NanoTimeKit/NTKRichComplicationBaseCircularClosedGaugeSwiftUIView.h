@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularClosedGaugeSwiftUIView : NTKRichComplicationCircularClosedGaugeContentView {
    CDComplicationHostingView *_swiftUIView;
}

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (id)gaugeProviderFromTemplate:(id)a0;
- (id)innerView;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
