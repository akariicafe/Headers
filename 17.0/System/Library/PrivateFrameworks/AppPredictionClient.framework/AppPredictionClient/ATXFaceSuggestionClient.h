@class ATXFaceGalleryBiomeStream, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface ATXFaceSuggestionClient : NSObject <ATXFaceSuggestionClientXPCInterface, ATXFaceSuggestionLogging> {
    NSXPCConnection *_connection;
    ATXFaceGalleryBiomeStream *_stream;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedInstance;

- (void)logPosterSwitch:(id)a0 completion:(id /* block */)a1;
- (void)fetchMetricsDescriptionWithCompletion:(id /* block */)a0;
- (void)posterBoardDidUpdateDescriptors:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)synchronousDateOfLastGalleryAppearanceWithCompletion:(id /* block */)a0;
- (void)posterBoardDidUpdateConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)logPosterEdit:(id)a0 completion:(id /* block */)a1;
- (void)logFaceGalleryItemsSeenInGalleryWithOutcomes:(id)a0 completion:(id /* block */)a1;
- (void)logFaceGalleryItemsDidAppear:(id)a0;
- (void)logDidHideFaceGalleryItem:(id)a0;
- (void)logDidTapComplication:(id)a0;
- (void)logDidAddComplication:(id)a0;
- (void)fetchFaceSuggestionsForFocusMode:(id)a0 completion:(id /* block */)a1;
- (void)logDidTapComplicationSet:(id)a0;
- (void)fetchLandscapeComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)logComplicationGalleryDidAppearWithComplicationSets:(id)a0;
- (void)fetchScoredComplicationDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchPosterDescriptorsAndSuggestionDataWithCompletion:(id /* block */)a0;
- (void)fetchRankedPosterDescriptors:(id /* block */)a0;
- (void)logComplicationsSeenInGalleryWithEngagements:(id)a0 completion:(id /* block */)a1;
- (void)fetchPosterConfigurationsWithCompletion:(id /* block */)a0;
- (void)inputDescriptionForComplicationSuggestionSignal:(id)a0 completion:(id /* block */)a1;
- (void)fetchComplicationSuggestionsModelDescriptionWithCompletion:(id /* block */)a0;
- (void)fetchComplicationSetsForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)regenerateFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)logDidTapFaceGalleryItem:(id)a0;
- (void)fetchFaceGalleryConfigurationWithCompletion:(id /* block */)a0;
- (void)logFaceGalleryDidDisappear;
- (void)_logEvent:(id)a0;
- (void)logComplicationGalleryDidDisappear;
- (void)logFaceGalleryDidAppearWithFaceGalleryConfiguration:(id)a0;
- (void)fetchInlineComplicationSetForFaceGalleryItem:(id)a0 completion:(id /* block */)a1;
- (void)refreshComplicationsCacheWithCompletion:(id /* block */)a0;
- (void)logPosterEditUIViewedWithCompletion:(id /* block */)a0;
- (void)logDidAddComplicationSet:(id)a0;

@end
