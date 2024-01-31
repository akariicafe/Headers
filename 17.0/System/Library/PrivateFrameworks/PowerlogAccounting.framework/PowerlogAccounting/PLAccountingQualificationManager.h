@class PLAccountingEnergyEventEntry;
@protocol PLAccountingQualificationManagerDelegate;

@interface PLAccountingQualificationManager : PLAccountingOwnerDependencyManager

@property (weak) id<PLAccountingQualificationManagerDelegate> delegate;
@property (retain, nonatomic) PLAccountingEnergyEventEntry *lastQualifiedEnergyEvent;

+ (double)freeTimerInterval;

- (void)reloadDependenciesNewerThanDate:(id)a0;
- (void)didQualifyEnergyEvent:(id)a0 withRootNodeID:(id)a1 withQualificationID:(id)a2;
- (void)addQualificationEvent:(id)a0;
- (void)closeLastQualificationEventForwardWithQualificationID:(id)a0 withEndDate:(id)a1;
- (void)addEnergyEstimate:(id)a0 withNow:(id)a1;
- (void).cxx_destruct;
- (id)ownerIDsForDependency:(id)a0;
- (id)dependencyIDsForOwner:(id)a0;

@end
