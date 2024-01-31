@class NSMutableDictionary, SBCPlaybackPositionDomain, SBCPlaybackPositionValueService, NSObject;
@protocol OS_dispatch_queue;

@interface VideosExtrasBookmarkController : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    SBCPlaybackPositionDomain *_domain;
    SBCPlaybackPositionValueService *_extrasService;
    NSMutableDictionary *_entities;
    NSMutableDictionary *_updateTimeForEntities;
}

@property (nonatomic) double minimumBookmarkUpdateInterval;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_loadAllBookmarksWithRemainingIdentifiers:(id)a0 bookmarkTimes:(id)a1 completionBlock:(id /* block */)a2;
- (void)pullBookmarksForAssets:(id)a0 completionBlock:(id /* block */)a1;
- (void)pullBookmarksForIdentifiers:(id)a0 completionBlock:(id /* block */)a1;
- (BOOL)pushBookmarkForAsset:(id)a0 bookmarkTime:(double)a1 playedToNominalLength:(BOOL)a2;
- (BOOL)pushBookmarkForIdentifier:(id)a0 bookmarkTime:(double)a1 playedToNominalLength:(BOOL)a2;

@end
