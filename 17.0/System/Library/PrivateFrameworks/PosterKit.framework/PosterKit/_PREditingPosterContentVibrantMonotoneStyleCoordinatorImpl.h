@class NSMutableDictionary, UIView;

@interface _PREditingPosterContentVibrantMonotoneStyleCoordinatorImpl : _PREditingPosterContentStyleCoordinatorImpl {
    UIView *_itemView;
    UIView *_itemViewContentView;
    UIView *_variationSliderThumbView;
    UIView *_variationSliderThumbContentView;
    UIView *_variationSliderTrackView;
    UIView *_variationSliderTrackContentView;
    NSMutableDictionary *_cachedTransparancyBackgrounds;
}

- (void).cxx_destruct;
- (id)effectiveColor;
- (id)itemView;
- (double)itemViewLuminance;
- (void)setVariation:(double)a0;
- (id)transparancyBackgroundImageForHeight:(double)a0;
- (id)variationSliderThumbView;
- (id)variationSliderTrackView;

@end
