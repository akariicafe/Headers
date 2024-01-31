@class NSMutableDictionary, MPCPlaybackEngine, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCPlaybackEngineSessionManager : NSObject <MPCPlaybackEngineEventObserving>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) NSMutableArray *sessionArchives;
@property (readonly, nonatomic) NSMutableDictionary *sessionIdentifierArchiveMap;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported;
@property (retain, nonatomic) NSString *stateRestorationSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archivesAtURL:(id)a0;

- (void)saveSessionWithCompletion:(id /* block */)a0;
- (id)initWithPlaybackEngine:(id)a0;
- (void)deleteSessionWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)_playbackSessionsDirectory;
- (void).cxx_destruct;

@end
