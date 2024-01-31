@class WFIntentExecutor;

@interface WFPlayPodcastAction : WFAction <WFActionSupportsContextualMediaPlayback>

@property (retain, nonatomic) WFIntentExecutor *executor;

- (void).cxx_destruct;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)attemptContextualPlayback;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)a0;
- (void)executePlayMediaIntent:(id)a0;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)a0 completionHandler:(id /* block */)a1;
- (id)localizedKeyParameterDisplayName;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)serializedParametersForContextualActionMediaIntent:(id)a0;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)a0;
- (id)contentNotFoundError;
- (id)errorPlayingPodcast:(unsigned int)a0;
- (id)genericPlayPodcastFailedError;
- (id)getPlaybackURLForContentItem:(id)a0;
- (void)playQueue:(struct _MRSystemAppPlaybackQueue { } *)a0 onPlayerPath:(void *)a1 completion:(id /* block */)a2;

@end
