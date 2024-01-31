@class PLAccountingQualificationEventEntry;

@interface PLAccountingQualificationDependency : PLAccountingDependency

@property (retain) PLAccountingQualificationEventEntry *qualificationEvent;

- (id)range;
- (id)ID;
- (id)activationDate;
- (id)initWithQualificationEvent:(id)a0;
- (void)setRange:(id)a0;
- (void).cxx_destruct;

@end
