@class NSArray, NSDictionary, NSSet, NSDate, PGMoodGenerationContext;

@interface PGMoodGeneratorOptions : NSObject

@property (retain) NSArray *prefetchedAssets;
@property (retain) NSDictionary *sceneIdentifiersByMomentNodeIdentifier;
@property (retain) NSSet *momentIDs;
@property (retain) NSDate *referenceDate;
@property (retain, nonatomic) PGMoodGenerationContext *moodGenerationContext;
@property (nonatomic) unsigned long long memoryCategory;
@property (nonatomic) unsigned long long memorySubcategory;
@property (retain, nonatomic) NSArray *moodHistory;

- (void).cxx_destruct;

@end
