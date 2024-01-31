@class CDComplicationHostingView;

@interface NTKRichComplicationBaseCircularOpenGaugeSwiftUIView : NTKRichComplicationCircularOpenGaugeContentView {
    CDComplicationHostingView *_bottomSwiftUIView;
}

- (void)setPaused:(BOOL)a0;
- (void).cxx_destruct;
- (id)bottomView;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)gaugeProvider:(id *)a0 andCenterTextProvider:(id *)a1 fromTemplate:(id)a2;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
