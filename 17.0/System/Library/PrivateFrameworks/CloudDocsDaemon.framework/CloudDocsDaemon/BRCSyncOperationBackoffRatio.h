@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    unsigned long long _totalSyncOperations;
    unsigned long long _failedSyncOperations;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)clear;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)backoffRatio;
- (void)newSyncOperationWithError:(id)a0;

@end
