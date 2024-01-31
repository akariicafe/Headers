@class JFXFaceTrackedEffectTransform, JFXARMetadata;

@interface JFXFaceTrackingPlaybackProperties : NSObject

@property (readonly, nonatomic) BOOL canTrackFace;
@property (readonly, nonatomic) JFXFaceTrackedEffectTransform *faceTrackingTransform;
@property (readonly, nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } mediaTimeRange;
@property (readonly, nonatomic) JFXARMetadata *arMetadata;
@property (readonly, nonatomic) long long mediaInterfaceOrientationForDisplay;

- (void).cxx_destruct;
- (BOOL)containsMediaTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1;
- (id)initWithFaceTrackableMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0 forDisplayingMediaAtInterfaceOrientation:(long long)a1 faceTrackingTransform:(id)a2 arMetadata:(id)a3;
- (id)initWithNonFaceTrackableMediaTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;

@end
