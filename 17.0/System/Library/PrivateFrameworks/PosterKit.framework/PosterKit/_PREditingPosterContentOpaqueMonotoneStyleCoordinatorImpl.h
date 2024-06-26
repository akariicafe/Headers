@class _PREditingPosterContentStyleGradientView, UIView;

@interface _PREditingPosterContentOpaqueMonotoneStyleCoordinatorImpl : _PREditingPosterContentStyleCoordinatorImpl {
    UIView *_itemView;
    UIView *_variationSliderThumbView;
    _PREditingPosterContentStyleGradientView *_variationSliderTrackView;
}

- (void).cxx_destruct;
- (id)effectiveColor;
- (id)itemView;
- (double)itemViewLuminance;
- (void)setVariation:(double)a0;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
