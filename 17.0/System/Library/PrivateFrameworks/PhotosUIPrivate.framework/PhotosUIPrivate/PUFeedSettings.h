@interface PUFeedSettings : PXSettings

@property (nonatomic) BOOL useJPEGImageFormats;
@property (nonatomic) double smallTileSizeTolerance;
@property (nonatomic) BOOL shouldUseJPEGFastFormatForMediumTiles;
@property (nonatomic) BOOL shouldUseJPEGFastFormatForLargeTiles;
@property (nonatomic) BOOL useQualityImageFormats;
@property (nonatomic) long long maximumScrollRegimeForQualityImageFormats;
@property (nonatomic) double speedometerMediumUpperThreshold;
@property (nonatomic) double speedometerMediumLowerThreshold;
@property (nonatomic) double speedometerFastUpperThreshold;
@property (nonatomic) double speedometerFastLowerThreshold;
@property (nonatomic) BOOL useSpeedometerFeedback;
@property (nonatomic) double preheatingMinimumScrollFactor;
@property (nonatomic) double slowScrollPreheatingWindowSize;
@property (nonatomic) double mediumScrollPreheatingWindowSize;
@property (nonatomic) double fastScrollPreheatingWindowSize;
@property (nonatomic) BOOL shouldPreheatCoreData;
@property (nonatomic) BOOL shouldPreheatAssets;
@property (nonatomic) BOOL shouldPreheatComments;
@property (nonatomic) BOOL forceDefaultPreheatManager;
@property (nonatomic) long long feedContent;
@property (nonatomic) long long initialWindowSize;
@property (nonatomic) long long testInitialWindowSize;
@property (nonatomic) BOOL ignoresCaptions;
@property (nonatomic) BOOL parallaxEnabled;
@property (nonatomic) long long parallaxModel;
@property (nonatomic) double parallaxFactor;
@property (nonatomic) BOOL allowsInfiniteScrolling;
@property (nonatomic) long long infiniteScrollingWindowSizeIncrement;
@property (nonatomic) BOOL forceAllItemsAsVideo;
@property (nonatomic) BOOL forceLivePhotoBadges;
@property (nonatomic) BOOL simulateSharedStreamsEnabled;
@property (nonatomic) BOOL vitalityEnabled;
@property (nonatomic) BOOL showGroupIDHeaders;
@property (nonatomic) BOOL loopsEnabled;

+ (id)sharedInstance;
+ (id)_localizedStrings;
+ (id)settingsControllerModule;

- (id)parentSettings;
- (void)setDefaultValues;

@end
