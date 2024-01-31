@class CDRichComplicationImageView;

@interface NTKRichComplicationRectangularLargeImageView : NTKRichComplicationRectangularHeadlineLargeBodyView {
    CDRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;
+ (BOOL)supportsComplicationFamily:(long long)a0;

- (void)setPaused:(BOOL)a0;
- (id)body;
- (void).cxx_destruct;
- (id)headerTextProviderFromTemplate:(id)a0;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
