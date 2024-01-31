@class NSArray;

@interface PXErrorRecoveryAttempter : NSObject

@property (copy, nonatomic) NSArray *recoveryOptions;

- (void).cxx_destruct;
- (void)attemptRecoveryFromError:(id)a0 optionIndex:(unsigned long long)a1 delegate:(id)a2 didRecoverSelector:(SEL)a3 contextInfo:(void *)a4;
- (long long)_alertActionStyleForRecoveryOptionAtIndex:(unsigned long long)a0;

@end
