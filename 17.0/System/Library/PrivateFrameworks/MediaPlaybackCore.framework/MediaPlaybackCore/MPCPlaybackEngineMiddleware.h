@class NSString, NSArray, MPCPlaybackEngine;

@interface MPCPlaybackEngineMiddleware : NSObject <MPCPlayerResponseBuilder, MPMiddleware>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *invalidationObservers;

- (id)operationsForPlayerRequest:(id)a0;
- (id)operationsForRequest:(id)a0;
- (id)_stateDumpObject;
- (id)playerVideoView:(id)a0 chain:(id)a1;
- (void).cxx_destruct;
- (id)videoOutput:(id)a0 chain:(id)a1;

@end
