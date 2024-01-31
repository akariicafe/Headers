@class NSNumber;

@interface SBAlwaysOnDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL enableAlwaysOn;
@property (nonatomic) BOOL enableTapToInteract;
@property (nonatomic) BOOL enableSwipeToUnlock;
@property (nonatomic) BOOL showWallpaperInAlwaysOn;
@property (nonatomic) BOOL showNotificationsInAlwaysOn;
@property (nonatomic) BOOL forceAndromedaSupport;
@property (nonatomic) BOOL useAlwaysOnBrightnessCurve;
@property (nonatomic) BOOL useDebugColors;
@property (nonatomic) BOOL enforceOverallAPLLimit;
@property (retain, nonatomic) NSNumber *maximumRenderInterval;

- (void)_bindAndRegisterDefaults;

@end
