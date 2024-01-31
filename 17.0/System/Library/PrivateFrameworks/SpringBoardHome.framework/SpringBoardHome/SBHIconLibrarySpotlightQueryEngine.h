@class SBHIconLibraryQueryContext;

@interface SBHIconLibrarySpotlightQueryEngine : SBHIconLibraryAbstractQueryEngine {
    SBHIconLibraryQueryContext *_currentlyRunningQueryContext;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)executeQuery:(id)a0;
- (void)_processingQueue_markBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1;
- (id)_relevancyQueryForLibraryQuery:(id)a0;
- (BOOL)_processingQueue_isBundleIdentifierValid:(id)a0 iconLibraryQueryContext:(id)a1;
- (void)_processingQueue_noteQueryResultsWereUpdated:(id)a0 iconLibraryQueryContext:(id)a1 notifyDelegate:(BOOL)a2;
- (id /* block */)_processingQueue_sortComperatorForQueryContext:(id)a0;
- (void)_processingQueue_teardownQueryContext:(id)a0;
- (void)_processingQueue_unmarkBundleIdentifiers:(id)a0 iconLibraryQueryContext:(id)a1;
- (void)_processingQueue_updateQueryRelevancyScores:(id)a0 iconLibraryQueryContext:(id)a1;
- (id)_searchQueryForIconLibraryQuery:(id)a0;
- (void)_teardownCSSearchQuery:(id)a0;

@end
