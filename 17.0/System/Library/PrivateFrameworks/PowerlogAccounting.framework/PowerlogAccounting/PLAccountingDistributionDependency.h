@class PLAccountingDistributionEventEntry;

@interface PLAccountingDistributionDependency : PLAccountingDependency

@property (retain) PLAccountingDistributionEventEntry *distributionEvent;

- (id)range;
- (id)ID;
- (id)activationDate;
- (void)setRange:(id)a0;
- (void).cxx_destruct;
- (id)initWithDistributionEvent:(id)a0;

@end
