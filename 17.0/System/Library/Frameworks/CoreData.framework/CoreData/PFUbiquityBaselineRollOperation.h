@class PFUbiquityBaselineHeuristics, NSObject;
@protocol PFUbiquityBaselineRollOperationDelegate;

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation {
    PFUbiquityBaselineHeuristics *_heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;

- (id)init;
- (void)dealloc;
- (void)main;
- (BOOL)isEqual:(id)a0;
- (id)retainedDelegate;

@end
