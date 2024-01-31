@class NSString, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface SBSSystemApertureRestrictionService : NSObject <BSInvalidatable> {
    BSServiceConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    id<BSInvalidatable> _restrictToInertAssertion;
    id<BSInvalidatable> _completeSuppressionAssertion;
    BOOL _isValid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)acquireRestrictSystemApertureLayoutToInertAssertionWithReason:(id)a0;
- (id)acquireSystemApertureCompleteSuppressionAssertionWithReason:(id)a0;

@end
