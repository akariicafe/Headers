@class CDRichComplicationImageView, CLKUIColoringLabel, CDComplicationHostingView;

@interface NTKRichComplicationRectangularLargeHeadlineBaseView : NTKRichComplicationRectangularBaseView {
    CDRichComplicationImageView *_headerImageView;
    CDComplicationHostingView *_headerSwiftUIView;
    CLKUIColoringLabel *_headerLabel;
}

+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_updateTemplateHeaderWithTextProvider:(id)a0 imageProvider:(id)a1 viewData:(id)a2 reason:(long long)a3;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
