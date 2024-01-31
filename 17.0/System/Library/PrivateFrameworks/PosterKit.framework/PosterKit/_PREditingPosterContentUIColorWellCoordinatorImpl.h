@class PREditingColorWellView, UIView;

@interface _PREditingPosterContentUIColorWellCoordinatorImpl : _PREditingPosterContentStyleCoordinatorImpl {
    PREditingColorWellView *_colorWellView;
    UIView *_variationSliderThumbView;
}

- (void).cxx_destruct;
- (id)effectiveColor;
- (id)initWithStyle:(id)a0 colorWellView:(id)a1;
- (id)itemView;
- (void)setVariation:(double)a0;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
