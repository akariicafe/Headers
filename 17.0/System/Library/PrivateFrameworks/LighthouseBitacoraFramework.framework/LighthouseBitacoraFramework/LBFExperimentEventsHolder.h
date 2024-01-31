@class NSString, NSMutableDictionary;

@interface LBFExperimentEventsHolder : NSObject

@property (readonly, nonatomic) NSString *experimentOrTaskId;
@property (readonly, retain, nonatomic) NSMutableDictionary *deploymentEventsHolders;

- (void).cxx_destruct;
- (BOOL)dumpFetchedEvents;
- (id)ensureDeploymentEventsHolder:(id)a0;
- (id)fetchedEventsInDictionaries;
- (id)initWithExperimentOrTaskId:(id)a0;

@end
