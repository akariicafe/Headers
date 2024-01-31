@class MPRequestResponseController, NSString;

@interface RENowPlayingRelevanceProviderManager : RERelevanceProviderManager <RENowPlayingRelevanceProviderManagerProperties, MPRequestResponseControllerDelegate> {
    unsigned long long _state;
    long long _playbackState;
    MPRequestResponseController *_requestResponseController;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) long long playbackState;
@property (readonly, nonatomic) MPRequestResponseController *requestResponseController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_features;
+ (Class)_relevanceProviderClass;

- (id)initWithQueue:(id)a0;
- (void)pause;
- (void)resume;
- (void).cxx_destruct;
- (void)controller:(id)a0 defersResponseReplacement:(id /* block */)a1;
- (void)_handleRoutingControllerActiveSystemRouteDidChange:(id)a0;
- (void)_updateActiveRoute;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)_updatePlaybackState;

@end
