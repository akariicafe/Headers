@class NSString, _DKEvent, NSArray, NSSet, NSObject;
@protocol OS_dispatch_queue, _DKKnowledgeQuerying;

@interface ARPRoutePredictor : NSObject

@property (class, readonly, copy) NSString *defaultFile;
@property (class, readonly) double defaultMicroLocationSimilarityThreshold;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) int token;
@property (readonly, copy, nonatomic) NSString *file;
@property (readonly, nonatomic) id<_DKKnowledgeQuerying> knowledgeStore;
@property (retain) _DKEvent *latestMicroLocationEvent;
@property (retain) NSArray *sessions;
@property double routingSessionTimeout;
@property BOOL hasLoadedMicroLocation;
@property (retain) NSSet *knownOutputDeviceIDs;
@property (readonly, nonatomic) double microLocationSimilarityThreshold;
@property (copy, nonatomic) id /* block */ longFormVideoFilter;

+ (id)routePredictor;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)predictionsWithCurrentContext:(id *)a0;
- (void)_reloadLatestMicroLocationEvent;
- (void)_reloadPersistedSessions;
- (id)initWithmicroLocationSimilarityThreshold:(double)a0 file:(id)a1 knowledgeStore:(id)a2;
- (id)predictionsForContext:(id)a0;
- (id)predictionsForCurrentContext;

@end
