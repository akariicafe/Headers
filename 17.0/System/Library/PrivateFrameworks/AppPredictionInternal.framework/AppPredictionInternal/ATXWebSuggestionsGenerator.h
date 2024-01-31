@class ATXVerticalModelsCache;

@interface ATXWebSuggestionsGenerator : NSObject {
    ATXVerticalModelsCache *_cache;
}

- (id)init;
- (void)overwriteWebsitePredictionsCacheWithWebsiteString:(id)a0 contextType:(id)a1;
- (void).cxx_destruct;
- (id)webpageTitlesAndSubtitles;
- (id)websitePredictionsForContextType:(id)a0 limit:(unsigned long long)a1;
- (id)rootUrlFromUrl:(id)a0;
- (id)dedupedUrlsFromUrls:(id)a0 limit:(unsigned long long)a1;
- (void)refreshWebsitePredictions;
- (id)urlToDatesGivenWebpageHistory:(id)a0;
- (id)webpageHistory;
- (id)webpageTitlesAndSubtitlesGivenWebpageHistory:(id)a0;
- (id)websitePredictionsForAllContexts;

@end
