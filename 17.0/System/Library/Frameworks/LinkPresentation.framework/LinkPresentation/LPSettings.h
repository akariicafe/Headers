@interface LPSettings : NSObject

@property (class, readonly, nonatomic) BOOL showDebugIndicators;
@property (class, readonly, nonatomic) BOOL disableLegacyStoreLookups;
@property (class, readonly, nonatomic) BOOL disableAutoPlay;
@property (class, readonly, nonatomic) BOOL disableAnimations;
@property (class, readonly, nonatomic) BOOL subsampleImagesToScreenSize;

+ (void)initialize;
+ (void)updateFromDefaults;

@end
