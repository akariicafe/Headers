@class WFIntentExecutor;

@interface WFPlayMusicAction : WFAction <WFActionSupportsContextualMediaPlayback>

@property (retain, nonatomic) WFIntentExecutor *executor;

- (void).cxx_destruct;
- (long long)repeatMode;
- (long long)shuffleMode;
- (BOOL)hasPlaybackArchive;
- (id)serializedParametersForDonatedIntent:(id)a0 allowDroppingUnconfigurableValues:(BOOL)a1;
- (BOOL)attemptContextualPlayback;
- (BOOL)canOfferSuggestionsForParameterWithKey:(id)a0;
- (void)executePlayMediaIntent:(id)a0;
- (void)fetchSuggestedEntititiesForParameterWithKey:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishRunningWithError:(id)a0;
- (void)initializeParameters;
- (id)localizedKeyParameterDisplayName;
- (BOOL)populatesInputFromInputParameter;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)serializedParametersForContextualActionMediaIntent:(id)a0;
- (id)systemEntityCollectionIdentifierForDisambiguatingParameterWithKey:(id)a0;
- (void)getContentWithCompletionHandler:(id /* block */)a0;
- (id)mediaQueryFromMediaCollection:(id)a0;
- (void)playContent:(id)a0 withMusicPlayer:(id)a1 completionHandler:(id /* block */)a2;
- (void)playContentViaMPCAssistant:(id)a0 routeDescriptor:(id)a1;
- (void)playContentViaMusicPlayer:(id)a0;
- (void)sendPlaybackArchive:(id)a0 orPlaybackQueue:(id)a1 toDestination:(id)a2 completion:(id /* block */)a3;
- (void)setShuffleAndRepeatModesOnMusicPlayer:(id)a0;

@end
