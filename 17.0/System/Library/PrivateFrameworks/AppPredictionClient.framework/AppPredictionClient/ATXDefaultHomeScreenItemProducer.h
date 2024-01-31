@class NSSet, NSDictionary, NSArray, NSMutableDictionary, CHSWidgetDescriptor, ATXDefaultHomeScreenItemUpdate;
@protocol ATXCategoricalHistogramProtocol;

@interface ATXDefaultHomeScreenItemProducer : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    id<ATXCategoricalHistogramProtocol> _spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}

@property (class, readonly, nonatomic) CHSWidgetDescriptor *appPredictionsWidgetDescriptor;

@property (readonly, nonatomic) NSSet *descriptors;
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates;
@property (readonly, nonatomic) NSArray *homeScreenConfig;
@property (nonatomic) BOOL isDayZeroExperience;
@property (nonatomic) BOOL isiPad;
@property (nonatomic) unsigned long long adblDrainClassification;
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary;
@property (retain, nonatomic) NSArray *candidateDescriptors;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen;
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;

- (id)_dayZeroUpdate;
- (BOOL)_isNewlyInstalledWidget:(id)a0;
- (id)_personalizedStack;
- (id)_stackableCandidates;
- (BOOL)_isStackConfiguredOnHomeScreen;
- (id)_firstInstalledWidgetDate;
- (id)_personalizedUpdate;
- (id)personalizedOnboardingStacksWithRankingAlgorithm:(int)a0;
- (id)_personalizedGalleryWidgetsForSize:(unsigned long long)a0;
- (id)_appPredictionsWidgetDescriptor;
- (id)_personalizedTodayStack;
- (id)_personalizedStackForRankerPlistType:(int)a0;
- (id)_personalizedStackFromCandidates:(id)a0 rankerPlistType:(int)a1 size:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)_initializeCachedWidgetPersonalityToAppScoreCache;
- (id)_stackFromDefaultStackPersonalities:(id)a0;
- (id)onboardingStacks;
- (id)ambientOnboardingStacks;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 adblDrainClassification:(unsigned long long)a6 appLaunchCounts:(id)a7;
- (long long)_rankTypeGivenWidgetIsNewlyInstalled:(BOOL)a0 isAlreadyAdded:(BOOL)a1;
- (id)initWithDescriptors:(id)a0 descriptorInstallDates:(id)a1 homeScreenConfig:(id)a2 isDayZeroExperience:(BOOL)a3 isiPad:(BOOL)a4 spotlightAppLaunchHistogram:(id)a5 appLaunchCounts:(id)a6;
- (id)_dayZeroOnboardingStacks;

@end
