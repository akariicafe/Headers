@class NSMutableArray;

@interface _PXStoryTimeBasedChapterCollectionConfiguration : NSObject <PXStoryConfigurableTimeBasedChapterCollection>

@property (readonly, nonatomic) NSMutableArray *chapters;
@property (nonatomic) BOOL usesAssetLocalCreationDates;

- (id)init;
- (void).cxx_destruct;
- (void)addChapterWithDateInterval:(id)a0 configuration:(id /* block */)a1;

@end
