@class CMSuppressionEvent, NSError;

@interface SBSystemActionViewObstructionState : NSObject {
    CMSuppressionEvent *_event;
    NSError *_error;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithEvent:(id)a0 error:(id)a1;

@end
