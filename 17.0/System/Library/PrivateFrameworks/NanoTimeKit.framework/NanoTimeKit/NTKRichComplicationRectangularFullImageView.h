@class CDRichComplicationImageView;

@interface NTKRichComplicationRectangularFullImageView : NTKRichComplicationRectangularFullBaseView {
    CDRichComplicationImageView *_imageView;
}

+ (BOOL)handlesComplicationTemplate:(id)a0;

- (void)setPaused:(BOOL)a0;
- (id)content;
- (void).cxx_destruct;
- (void)_handleTemplate:(id)a0 reason:(long long)a1;
- (void)renderSynchronouslyWithImageQueueDiscard:(BOOL)a0 inGroup:(id)a1;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (long long)tritiumUpdateMode;
- (void)updateMonochromeColor;

@end
