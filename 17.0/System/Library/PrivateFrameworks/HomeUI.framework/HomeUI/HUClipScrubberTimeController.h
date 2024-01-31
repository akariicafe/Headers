@interface HUClipScrubberTimeController : NSObject

@property (nonatomic) double minimumPosterFrameDuration;
@property (nonatomic) double maximumPosterFrameDuration;
@property (nonatomic) double timeScale;
@property (readonly, nonatomic) double maximumGestureScale;
@property (nonatomic) BOOL portraitMode;
@property (nonatomic) BOOL userControlled;

- (id)init;
- (void)dealloc;
- (BOOL)isAtMinimumZoom;
- (double)updateTimeScaleForGestureScale:(double)a0;
- (double)_numberOfPosterFrameUnitsForEvent:(id)a0 timeScale:(double)a1;
- (double)clampGestureScale:(double)a0;
- (void)expandTimelineToMaximumZoom;
- (double)numberOfPosterFrameUnitsForEvent:(id)a0;
- (double)posterFrameWidth;
- (double)posterFrameWidthFromCameraLiveSource;
- (void)reloadEvents:(id)a0;
- (void)shrinkTimelineToMinimumZoom;
- (double)timelineWidthForEvent:(id)a0;
- (void)updateTimeScaleIfNeeded;

@end
