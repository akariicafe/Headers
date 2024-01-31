@class NWStatsManager;

@interface NWStatsPollHandler : NSObject

@property (copy) id /* block */ deliveryBlock;
@property (copy) id /* block */ completionBlock;
@property BOOL synchronous;
@property long long instanceNumber;
@property (nonatomic) unsigned long long ntstatContext;
@property (retain) NWStatsManager *manager;

- (id)init;
- (void)handleSnapshot:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
