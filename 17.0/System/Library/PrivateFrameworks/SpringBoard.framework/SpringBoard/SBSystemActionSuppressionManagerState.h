@class SBSystemActionSuppressionStatus;

@interface SBSystemActionSuppressionManagerState : NSObject {
    BOOL _isEligibleForViewObstructionEvents;
    BOOL _canUsePocketStateForSuppression;
    SBSystemActionSuppressionStatus *_suppressionStatus;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
