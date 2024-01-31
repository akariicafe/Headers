@class BLSHInactiveBudgetBucketEntryCount, NSDate;

@interface BLSHInactiveBudgetBucket : NSObject

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *minuteBoundaryDate;
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *entryCount;
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *renderedEntryCount;
@property (readonly, nonatomic) BLSHInactiveBudgetBucketEntryCount *invalidatedEntryCount;
@property (readonly, nonatomic, getter=isSecondsFidelity) BOOL secondsFidelity;
@property (readonly, nonatomic, getter=hasBeenRendered) BOOL rendered;
@property (readonly, nonatomic) BOOL containsInvalidation;

- (void)resetFutureSpecifiers;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (double)addFutureSpecifier:(id)a0 hasSecondsBudget:(BOOL)a1 allowBeforeStart:(BOOL)a2;
- (double)addInvalidation:(id)a0 hasSecondsBudget:(BOOL)a1 allowBeforeStart:(BOOL)a2;
- (double)applyRenderedSpecifier:(id)a0 allowBeforeStart:(BOOL)a1;
- (id)initWithFutureSpecifier:(id)a0;
- (id)initWithInvalidation:(id)a0;
- (void)resetFutureAndRenderedSpecifiers;
- (id)shortLoggingString;
- (BOOL)validAtDate:(id)a0;

@end
