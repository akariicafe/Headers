@class SBCornerFingerPanGestureSettings;

@interface SBCornerFingerGestureClassifier : NSObject {
    SBCornerFingerPanGestureSettings *_settings;
}

- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (BOOL)classifySwipeWithOffsettedAngle:(double)a0 distanceToCorner:(double)a1 portrait:(BOOL)a2;

@end
