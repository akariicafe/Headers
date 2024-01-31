@class NSString, NSArray;

@interface PLNetworkEnergyModel : NSObject

@property double powerlevel1Duration;
@property double powerlevel2Duration;
@property double powerlevel3Duration;
@property unsigned char linkType;
@property double overallBytes;
@property double overallDuration;
@property unsigned int updateCount;
@property (retain) NSString *taskUUID;
@property (retain) NSArray *linkCost;
@property (retain) NSArray *linkDuration;
@property (retain) NSArray *linkLevel1Parameters;

- (id)description;
- (void).cxx_destruct;
- (double)computeLevel1TimeWithBytes:(double)a0;
- (double)getEnergy;
- (id)initWithLinkType:(unsigned char)a0;
- (id)initWithLinkType:(unsigned char)a0 withTaskUUID:(id)a1;
- (void)reportEnergyToPowerlogWithClientID:(short)a0;
- (void)updateAllLevelTimesWithLevel1Time:(double)a0 withUpdateDuration:(double)a1;
- (void)updateWithBytes:(double)a0 withDuration:(double)a1;

@end
