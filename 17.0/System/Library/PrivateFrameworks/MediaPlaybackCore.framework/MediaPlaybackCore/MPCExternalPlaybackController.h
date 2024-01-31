@class MPAVRoutingController, MPCPlaybackEngine, NSString, MPCMediaFoundationTranslator;

@interface MPCExternalPlaybackController : NSObject <MPAVRoutingControllerDelegate, MFExternalPlaybackController, MPCExternalPlaybackRouter>

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) MPCMediaFoundationTranslator *translator;
@property (readonly, nonatomic) MPAVRoutingController *routingController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pickBestDeviceRoute;
- (void).cxx_destruct;
- (void)routingControllerExternalScreenTypeDidChange:(id)a0;
- (void)configureExternalPlaybackForPlayer:(id)a0 queueItem:(id)a1;
- (long long)exernalPlaybackRouteRestrictionForItem:(id)a0 route:(id)a1 isScreenMirroringActive:(BOOL)a2;
- (id)initWithPlaybackEngine:(id)a0 translator:(id)a1;
- (BOOL)isExternalPlaybackAllowedForItem:(id)a0;
- (BOOL)playerShouldUseAudiOnlyMode:(id)a0 item:(id)a1 externalScreenType:(long long)a2;

@end
