@class _UIMotionAnalyzerSettings, _UIViewerRelativeDevicePose;

@interface _UIMotionAnalyzer : NSObject

@property (readonly, nonatomic) _UIMotionAnalyzerSettings *settings;
@property (readonly, nonatomic) _UIViewerRelativeDevicePose *viewerRelativeDevicePose;

- (id)init;
- (void)reset;
- (BOOL)applyHysteresisWithReceivedEventTimestamp:(double)a0 timeSinceLastNewMotionEvent:(double)a1 slowUpdatesEnabled:(BOOL)a2 returningShouldToggleSlowUpdates:(BOOL *)a3 logger:(id)a4;
- (void)updateHistory;
- (void)updateWithEvent:(id)a0;
- (void)resetHysteresis;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;

@end
