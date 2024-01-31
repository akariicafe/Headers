@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL includesAllFaces;
@property (nonatomic) BOOL focusOnPeople;
@property (nonatomic) BOOL focusOnInterestingItems;
@property (nonatomic, getter=identicalDedupingIsEnabled) BOOL identicalDedupingEnabled;
@property (nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled;
@property (nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking;
@property (nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled;
@property (nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled;
@property (nonatomic) BOOL shouldSkipClustering;
@property (copy, nonatomic) NSSet *uuidsOfRequiredAssets;
@property (copy, nonatomic) NSSet *uuidsOfEligibleAssets;
@property (copy, nonatomic) NSSet *personLocalIdentifiersToFocus;
@property (nonatomic) BOOL useDurationBasedCuration;
@property (nonatomic) BOOL failIfMinimumDurationNotReached;
@property (nonatomic) BOOL skipCurationIfEligibleItemsFitTargetDuration;
@property (nonatomic) double defaultDurationOfStillPhoto;
@property (nonatomic) double defaultDurationOfLivePhoto;
@property (nonatomic) double defaultDurationOfVideo;
@property (nonatomic) double minimumDuration;
@property (nonatomic) double targetDuration;
@property (nonatomic) unsigned long long minimumNumberOfItems;
@property (nonatomic) unsigned short sharingFilter;

+ (id)defaultOptions;

- (id)initWithDuration:(unsigned long long)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
