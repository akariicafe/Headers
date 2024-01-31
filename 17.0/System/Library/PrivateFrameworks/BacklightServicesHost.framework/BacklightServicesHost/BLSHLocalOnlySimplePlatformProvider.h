@class BLSHFlipbookSpecification, NSString;
@protocol BLSHFlipbookTelemetry, BLSHBacklightPlatformProvider, BLSHBacklightEnvironmentSessionProviding;

@interface BLSHLocalOnlySimplePlatformProvider : NSObject <BLSHBacklightPlatformProvider, BLSHBacklightEnvironmentSessionProviding, BLSHServicePlatformProvider>

@property (readonly, nonatomic) double backlightFadeInDuration;
@property (readonly, nonatomic) double backlightFadeOutDuration;
@property (readonly, nonatomic) id<BLSHBacklightEnvironmentSessionProviding> sessionProvider;
@property (readonly, nonatomic, getter=isShowingBlankingWindow) BOOL showingBlankingWindow;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly, nonatomic) BLSHFlipbookSpecification *flipbookSpecification;
@property (readonly, nonatomic) id<BLSHFlipbookTelemetry> flipbookTelemetryDelegate;
@property (readonly, nonatomic, getter=isUsingAlwaysOnBrightnessCurve) BOOL useAlwaysOnBrightnessCurve;
@property (readonly, nonatomic) float backlightDimmedFactor;
@property (readonly, nonatomic) double backlightDimmingDuration;
@property (readonly, nonatomic) BOOL suppressionSupported;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<BLSHBacklightPlatformProvider> backlightPlatformProvider;

- (void)showBlankingWindow:(BOOL)a0 withFadeDuration:(double)a1;
- (void)removeObserver:(id)a0;
- (id)createInactiveEnvironmentSession;
- (id)initWithConfiguration:(id)a0;
- (void)addObserver:(id)a0;

@end
