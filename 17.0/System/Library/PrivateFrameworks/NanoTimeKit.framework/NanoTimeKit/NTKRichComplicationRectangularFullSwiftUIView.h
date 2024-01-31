@class CDComplicationHostingView;

@interface NTKRichComplicationRectangularFullSwiftUIView : NTKRichComplicationRectangularFullBaseView {
    CDComplicationHostingView *_swiftUIView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setPaused:(BOOL)a0;
- (id)content;
- (void).cxx_destruct;
- (void)_editingDidEnd;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;

@end
