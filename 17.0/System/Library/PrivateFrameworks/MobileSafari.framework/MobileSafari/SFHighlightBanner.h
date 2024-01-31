@class SFThemeColorEffectView, SLHighlight, SWAttributionView;

@interface SFHighlightBanner : SFPinnableBanner {
    SFThemeColorEffectView *_backdrop;
    SWAttributionView *_attributionView;
}

@property (readonly, nonatomic) SLHighlight *highlight;
@property (copy, nonatomic) id /* block */ closeActionHandler;

- (void)_close;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHighlight:(id)a0;
- (void)themeDidChange;

@end
