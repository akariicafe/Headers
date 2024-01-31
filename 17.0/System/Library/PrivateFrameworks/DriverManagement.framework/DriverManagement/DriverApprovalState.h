@class _SwiftDriverApprovalState;

@interface DriverApprovalState : NSObject {
    _SwiftDriverApprovalState *_swiftDriverApprovalState;
}

- (void).cxx_destruct;
- (id)displayName;
- (BOOL)driverIsApproved;
- (BOOL)updatePending;
- (id)usageText;
- (id)initWithSwiftDriverApprovalState:(id)a0;

@end
