@interface CRKConcreteOSTransactionPrimitives : NSObject <CRKOSTransactionPrimitives>

@property (readonly, nonatomic) long long transactionCount;

- (void)incrementCount;
- (void)decrementCount;
- (id)transactionWithReverseDNSReason:(id)a0;

@end
