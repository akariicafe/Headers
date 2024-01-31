@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (nonatomic) unsigned long long highlightTailorOptions;
@property (readonly, nonatomic) BOOL curatedLibraryFTEIsReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)_dayGroupHighlightsToEnrichForDayHighlights:(id)a0 dayGroupHighlights:(id)a1;
- (id)initWithHighlightTailorOptions:(unsigned long long)a0;
- (void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)a0;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;

@end
