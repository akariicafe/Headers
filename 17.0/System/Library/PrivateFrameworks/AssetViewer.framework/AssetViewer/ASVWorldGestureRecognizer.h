@class NSSet, ASVVelocitySample3D, NSString, ASVDeceleration;
@protocol ASVWorldGestureRecognizerDelegate;

@interface ASVWorldGestureRecognizer : ASVUnifiedGestureRecognizer <ASVWorldSingleFingerGestureDelegate, ASVWorldTwoFingerGestureDelegate>

@property (retain, nonatomic) ASVDeceleration *translationDeceleration;
@property (retain, nonatomic) ASVVelocitySample3D *translationVelocitySample;
@property (retain, nonatomic) ASVVelocitySample3D *translationLastVelocitySample;
@property (nonatomic) void /* unknown type, empty encoding */ normalizedVelocity;
@property (nonatomic) void /* unknown type, empty encoding */ lastTranslationLocation;
@property (nonatomic) double lastTranslationTime;
@property (weak, nonatomic) id<ASVWorldGestureRecognizerDelegate> worldDelegate;
@property (retain, nonatomic) NSSet *snapScalesSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float minimumObjectScale;
@property (readonly, nonatomic) float maximumObjectScale;

- (void)update;
- (BOOL)isDecelerating;
- (void).cxx_destruct;
- (BOOL)isActive;
- (void)cancelDeceleration;
- (float)clampedScaleForScale:(float)a0;
- (void)gesture:(SEL)a0 levitatedAssetToScreenPoint:(id)a1;
- (void)gesture:(SEL)a0 translatedAssetToScreenPoint:(id)a1;
- (void)gestureBeganLevitation:(id)a0;
- (void)gestureBeganTranslation:(id)a0;
- (void)gestureEndedLevitation:(id)a0;
- (void)gestureEndedTranslation:(id)a0;
- (id)initWithWorldDelegate:(id)a0 feedbackGenerator:(id)a1;
- (void)setEnabledGestureTypes:(unsigned long long)a0;
- (id)singleFingerGestureForTouch:(id)a0 dataSource:(id)a1 enabledGestureTypes:(unsigned long long)a2;
- (void)startTranslationDecelerationWithInitialVelocity:(SEL)a0;
- (id)twoFingerGestureForFirstTouch:(id)a0 secondTouch:(id)a1 dataSource:(id)a2;
- (void)updateDecelerationTranslation;

@end
