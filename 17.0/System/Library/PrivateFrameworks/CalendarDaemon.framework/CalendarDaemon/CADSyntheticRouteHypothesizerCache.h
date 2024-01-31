@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CADSyntheticRouteHypothesizerCache : NSObject

@property (class, readonly, nonatomic) CADSyntheticRouteHypothesizerCache *sharedInstance;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSMutableDictionary *eventExternalURLToSyntheticRouteHypothesizerMap;

- (id)_init;
- (void).cxx_destruct;
- (void)addSyntheticRouteHypothesizer:(id)a0 forEventExternalURL:(id)a1;
- (void)removeSyntheticRouteHypothesizerForEventExternalURL:(id)a0;
- (id)syntheticRouteHypothesizerForEventExternalURL:(id)a0;

@end
