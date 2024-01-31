@class SBIconPageIndicatorImageSetResult, _UILegibilitySettings;

@interface SBIconPageIndicatorImageSetCache : NSObject {
    SBIconPageIndicatorImageSetResult *_indicatorImageSetResults;
    SBIconPageIndicatorImageSetResult *_searchImageSetResults;
    SBIconPageIndicatorImageSetResult *_cameraImageSetResults;
}

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

- (id)pageIndicatorImageSetForLegibilitySettings:(id)a0;
- (id)_emptyPageIndicatorSet;
- (id)searchIndicatorImageSetForLegibilitySettings:(id)a0;
- (void).cxx_destruct;
- (id)cameraIndicatorImageSetForLegibilitySettings:(id)a0;

@end
