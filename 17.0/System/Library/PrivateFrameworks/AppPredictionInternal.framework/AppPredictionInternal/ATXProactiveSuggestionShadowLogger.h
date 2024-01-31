@class BPSPublisher, NSSet, NSURL;

@interface ATXProactiveSuggestionShadowLogger : NSObject

@property (retain, nonatomic) BPSPublisher *shadowEventPublisher;
@property (retain, nonatomic) BPSPublisher *clientModelPublisher;
@property (retain, nonatomic) BPSPublisher *contextPublisher;
@property (readonly, nonatomic) NSSet *clientModelIds;
@property (readonly, nonatomic) NSURL *bookmarkURLPath;

- (void).cxx_destruct;
- (void)enumerateShadowLoggingResultsWithBlock:(id /* block */)a0 clientModelCacheUpdatedBlock:(id /* block */)a1 completionBlock:(id /* block */)a2;
- (void)enumerateShadowLoggingResultsWithBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (id)initWithClientModelIds:(id)a0 shadowEventPublisher:(id)a1 clientModelPublisher:(id)a2 contextPublisher:(id)a3 bookmarkURLPath:(id)a4;
- (id)newBookmarkWithURLPath:(id)a0 versionNumber:(id)a1 bookmark:(id)a2 metadata:(id)a3;
- (id)shadowLoggingPublisher;

@end
