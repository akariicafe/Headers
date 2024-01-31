@class JFXOverlayEffectTransforms;

@interface JFXOverlayEffectFrame : JFXTextEffectFrame

@property (nonatomic) long long trackingType;
@property (retain, nonatomic) JFXOverlayEffectTransforms *transforms;
@property (nonatomic) struct CGPoint { double x; double y; } overlayCenter;
@property (readonly, nonatomic) BOOL isTrackedButTrackingUnavailable;

+ (id)frameWithEffect:(id)a0 relativeToSize:(struct CGSize { double x0; double x1; })a1 origin:(int)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forcePosterFrame:(BOOL)a4 includeDropShadow:(BOOL)a5 includeTextFrames:(BOOL)a6;

- (id)description;
- (id)initWithEffect:(id)a0 relativeToSize:(struct CGSize { double x0; double x1; })a1 origin:(int)a2 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a3 forcePosterFrame:(BOOL)a4 includeDropShadow:(BOOL)a5 includeTextFrames:(BOOL)a6;

@end
