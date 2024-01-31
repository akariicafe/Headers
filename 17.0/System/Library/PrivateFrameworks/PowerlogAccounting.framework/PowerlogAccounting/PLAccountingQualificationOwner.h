@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingQualificationOwnerManager;

@interface PLAccountingQualificationOwner : PLAccountingOwner

@property (weak) id<PLAccountingQualificationOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *energyEstimate;

- (id)range;
- (id)ID;
- (id)initWithEnergyEstimate:(id)a0;
- (void)run;
- (void)qualify;
- (id)activationDate;
- (void)setRunDate:(id)a0;
- (void).cxx_destruct;

@end
