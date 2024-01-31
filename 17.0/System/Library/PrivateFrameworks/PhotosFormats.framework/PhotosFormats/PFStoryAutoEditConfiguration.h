@class NSNumber, NSURL, NSDictionary;
@protocol PFStoryTransitionTable, PFStoryMotionStyleTable;

@interface PFStoryAutoEditConfiguration : NSObject {
    NSDictionary *_durationTablesByPlaybackStyle;
    NSDictionary *_transitionDurationsByKind;
    NSDictionary *_clusteringPropertiesByCategory;
    NSDictionary *_overallDurationTable;
    NSDictionary *_outroDurations;
}

@property (class, readonly) NSNumber *currentVersion;

@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } minimumDurations;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } maximumDurations;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) id<PFStoryTransitionTable> defaultTransitionTable;
@property (readonly, nonatomic) id<PFStoryTransitionTable> interMomentTransitionTable;
@property (readonly, nonatomic) id<PFStoryTransitionTable> portraitTransitionTable;
@property (readonly, nonatomic) id<PFStoryTransitionTable> nUpTransitionTable;
@property (readonly, nonatomic) id<PFStoryTransitionTable> interModuleTransitionTable;
@property (readonly, nonatomic) id<PFStoryMotionStyleTable> motionStyleTable;
@property (readonly, nonatomic) id<PFStoryMotionStyleTable> diptychMotionStyleTable;
@property (readonly, nonatomic) id<PFStoryMotionStyleTable> triptychMotionStyleTable;
@property (readonly, nonatomic) double diptychDurationMultiplier;
@property (readonly, nonatomic) double triptychDurationMultiplier;
@property (readonly, nonatomic) double initialDurationMultiplier;
@property (readonly, nonatomic) double chapterBeginDurationMultiplier;
@property (readonly, nonatomic) double finalDurationMultiplier;
@property (readonly, nonatomic) double slowVisualTempoTarget;
@property (readonly, nonatomic) double mediumVisualTempoTarget;
@property (readonly, nonatomic) double fastVisualTempoTarget;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } shortOverallDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } mediumOverallDuration;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; } longOverallDuration;
@property (readonly, nonatomic) double composabilityTargetDurationMultiplier;
@property (readonly, nonatomic) long long composabilityMinimum1UpRunCount;
@property (readonly, nonatomic) long long composabilityMinimumNUpCount;
@property (readonly, nonatomic) long long composabilityMaximumNUpRunCount;
@property (readonly, nonatomic) double composabilityScoreThreshold;

+ (id)standardConfiguration;

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfigurationDictionary:(id)a0;
- (id)initWithConfigurationFileAtURL:(id)a0;
- (id)_arrayFromTable:(id)a0 count:(unsigned long long)a1 nameToValueMap:(id)a2;
- (void)_loadClusteringPropertiesFromMemoryCategories:(id)a0;
- (id)_loadData:(id)a0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })_overallDurationInfoForDurationKind:(long long)a0;
- (id)clusteringPropertiesForMemoryCategoryName:(id)a0;
- (double)durationForTransitionKind:(long long)a0 songPace:(long long)a1;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; struct { long long x0; int x1; unsigned int x2; long long x3; } x2; })durationInfoForPlaybackStyle:(long long)a0 songPace:(long long)a1;
- (id)initWithConfigurationData:(id)a0;
- (double)outroDurationForSongPace:(long long)a0;

@end
