@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingDistributionOwnerManager;

@interface PLAccountingDistributionOwner : PLAccountingOwner

@property (weak) id<PLAccountingDistributionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)range;
- (id)ID;
- (id)initWithEnergyEstimate:(id)a0;
- (void)run;
- (id)activationDate;
- (void)distribute;
- (void)setRunDate:(id)a0;
- (void).cxx_destruct;

@end
