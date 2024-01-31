@class PLXPCResponderOperatorComposition, NSString, NSMutableDictionary, NSDictionary, NSOperationQueue, NSMutableArray;

@interface PLBatteryUIResponderService : PLService <PLBatteryUIResponseProtocol>

@property (retain) NSString *requestingService;
@property (retain) NSString *plistCopyDestination;
@property BOOL skipPlistWrite;
@property (retain) NSMutableDictionary *resultDictionary;
@property (retain) PLXPCResponderOperatorComposition *queryResponder;
@property (retain) NSDictionary *configuration;
@property (retain) NSMutableDictionary *requestedObjects;
@property (retain) NSMutableArray *executionChain;
@property (retain) NSOperationQueue *operationQueue;
@property (retain) NSMutableArray *orderOfExecution;
@property (retain) PLBatteryUIResponderService *responderService;
@property (retain) NSMutableArray *dependencies;
@property (retain) NSMutableDictionary *responseCache;
@property (retain) NSMutableDictionary *sharedUtilityCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)load;

- (void)configure:(id)a0;
- (void)run;
- (void)initOperatorDependancies;
- (void)cleanup;
- (id)result;
- (void).cxx_destruct;
- (void)coalesce;
- (BOOL)demoMode;
- (id)constructResponseObjectFromType:(long long)a0;
- (id)convertResponseToLegacyFormat:(id)a0;
- (id)demoPath;
- (double)endOfDayWithNow:(id)a0;
- (double)endOfHourWithNow:(id)a0;
- (void)linkDependencies;

@end
