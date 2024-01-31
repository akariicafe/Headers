@class PLAccountingEnergyEstimateEventEntry;
@protocol PLAccountingCorrectionOwnerManager;

@interface PLAccountingCorrectionOwner : PLAccountingOwner

@property (weak) id<PLAccountingCorrectionOwnerManager> manager;
@property (retain) PLAccountingEnergyEstimateEventEntry *rootEnergyEstimate;

- (id)range;
- (id)ID;
- (id)initWithRootEnergyEstimate:(id)a0;
- (void)run;
- (id)activationDate;
- (void)setRunDate:(id)a0;
- (void).cxx_destruct;
- (void)correct;

@end
