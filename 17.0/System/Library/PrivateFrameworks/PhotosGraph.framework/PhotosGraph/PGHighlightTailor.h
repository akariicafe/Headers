@class NSArray, PGManagerWorkingContext, NSObject, PGMoodGenerationContext;
@protocol OS_dispatch_group, OS_os_log;

@interface PGHighlightTailor : NSObject {
    PGManagerWorkingContext *_workingContext;
    NSArray *_enrichmentProfiles;
    NSObject<OS_dispatch_group> *_enrichmentCommitGroup;
    PGMoodGenerationContext *_moodGenerationContext;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (BOOL)itemScoreIsAutoplayable:(double)a0;

- (id)initForTesting;
- (void).cxx_destruct;
- (id)allHighlightModelsNeedingEnrichmentForHighlightSubtype:(long long)a0 options:(unsigned long long)a1;
- (id)enrichmentValuesForHighlight:(id)a0 usingEnrichmentProfile:(id)a1 graph:(id)a2 options:(unsigned long long)a3 reportChangedValuesOnly:(BOOL)a4 highlightTailorContext:(id)a5 progressBlock:(id /* block */)a6;
- (id)assetSortDescriptors;
- (id)bestEnrichmentProfileForHighlight:(id)a0 options:(unsigned long long)a1;
- (id)computeChangedVisibilityScoresForItems:(id)a0;
- (BOOL)enrichAllHighlightsWithOptions:(unsigned long long)a0 progressBlock:(id /* block */)a1;
- (BOOL)enrichDayHighlights:(id)a0 dayGroupHighlights:(id)a1 adaptiveHighlights:(id)a2 withOptions:(unsigned long long)a3 progressBlock:(id /* block */)a4;
- (BOOL)enrichHighlights:(id)a0 options:(unsigned long long)a1 progressBlock:(id /* block */)a2;
- (double)highlightVisibilityWeightForItem:(id)a0;
- (id)initWithWorkingContext:(id)a0;
- (id)keyAssetFromHighlight:(id)a0 sharingFilter:(unsigned short)a1;
- (BOOL)shouldEnrichHighlight:(id)a0 withEnrichmentProfile:(id)a1 options:(unsigned long long)a2;
- (id)sortedCurationOfType:(unsigned short)a0 fromHighlight:(id)a1;
- (unsigned long long)tailorOptionsAllowedForHighlight:(id)a0 originalOptions:(unsigned long long)a1;
- (void)writeHighlightEnrichmentValues:(id)a0 toChangeRequest:(id)a1 highlight:(id)a2 options:(unsigned long long)a3;

@end
