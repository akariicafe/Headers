@class NSArray, NSMutableArray;

@interface MechanismKofN : MechanismBase {
    NSMutableArray *_runningMechanisms;
    BOOL _finishing;
}

@property (readonly, nonatomic) unsigned long long k;
@property (readonly, nonatomic) unsigned long long n;
@property (readonly, nonatomic) NSArray *submechanisms;
@property (readonly, nonatomic, getter=isSerial) BOOL serial;
@property (readonly, nonatomic, getter=isAND) BOOL AND;
@property (readonly, nonatomic, getter=isOR) BOOL OR;

+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
+ (id)mechanismWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3 preserveStandaloneReorganizers:(BOOL)a4;

- (id)cachedExternalizationDelegate;
- (void).cxx_destruct;
- (id)findMechanismWithEventIdentifier:(long long)a0;
- (void)finishRunWithResult:(id)a0 error:(id)a1;
- (void)runWithHints:(id)a0 eventsDelegate:(id)a1 reply:(id /* block */)a2;
- (void)_runSubmechanismAtIndex:(long long)a0 hints:(id)a1 eventsDelegate:(id)a2 succeeded:(long long)a3 failed:(long long)a4 results:(id)a5 reply:(id /* block */)a6;
- (id)additionalControllerInternalInfoForPolicy:(long long)a0;
- (id)availabilityEventsForPurpose:(long long)a0;
- (id)bestEffortAvailableMechanismForRequest:(id)a0 error:(id *)a1;
- (id)descriptionFlags;
- (id)initWithK:(unsigned long long)a0 ofSubmechanisms:(id)a1 serial:(BOOL)a2 request:(id)a3;
- (BOOL)pause:(BOOL)a0 forEvent:(long long)a1 error:(id *)a2;
- (BOOL)requiresRemoteViewControllerUiWithEventProcessing:(id)a0;
- (BOOL)requiresUiWithEventProcessing:(id)a0;

@end
