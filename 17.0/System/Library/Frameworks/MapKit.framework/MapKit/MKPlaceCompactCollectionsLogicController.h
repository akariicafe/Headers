@class MKPlaceBatchController, NSArray, GEOGuideLocation, NSString;
@protocol MKPlaceBatchConsumer;

@interface MKPlaceCompactCollectionsLogicController : NSObject <MKPlaceBatchConsumer, MKCompactCollectionDataProvider, MKCompactCollectionDataUpdater>

@property (nonatomic) long long context;
@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *viewModels;
@property (retain, nonatomic) NSArray *batchableLocations;
@property (retain, nonatomic) NSArray *flattenedIdentifiersForBatching;
@property (retain, nonatomic) MKPlaceBatchController *batchController;
@property (weak, nonatomic) id<MKPlaceBatchConsumer> guideConsumer;
@property (retain, nonatomic) GEOGuideLocation *selectedGuideLocation;
@property (nonatomic) unsigned long long initialDisplayCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)numberOfSections;
- (void).cxx_destruct;
- (id)initWithGuideLocations:(id)a0 context:(long long)a1;
- (id)buildBatchingStructureForResult:(id)a0;
- (id)buildViewModelsFromGuideLocations:(id)a0;
- (id)compactCollectionAtIndex:(unsigned long long)a0 sectionIndex:(unsigned long long)a1;
- (id)compactCollectionsInSection:(unsigned long long)a0;
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)a0 usingCollectionFetcher:(id)a1 usingGuideConsumer:(id)a2 batchSize:(unsigned long long)a3;
- (void)dismissedCompactCollections;
- (id)initWithGuideLocationsResult:(id)a0 context:(long long)a1 usingCollectionFetcher:(id)a2 usingGuideConsumer:(id)a3 usingBatchSize:(unsigned long long)a4 selectedGuideLocation:(id)a5;
- (void)shouldConsumeBatch:(BOOL)a0 fetchedBatch:(id)a1;
- (id)titleForSectionFromTitle:(id)a0;
- (void)willDisplayCellAtIndexpath:(id)a0;

@end
