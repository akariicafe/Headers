@class BMMiningTaskConfig;

@interface BMEventExtractor : NSObject

@property BOOL shouldStop;
@property (retain) BMMiningTaskConfig *bmMiningTaskConfig;

- (id)init;
- (void).cxx_destruct;
- (id)extractEventsFilteredByTypes:(id)a0 taskSpecificEventProviders:(id)a1 error:(id *)a2;
- (id)initWithBMMiningTaskConfig:(id)a0;
- (void)terminateEarly;

@end
