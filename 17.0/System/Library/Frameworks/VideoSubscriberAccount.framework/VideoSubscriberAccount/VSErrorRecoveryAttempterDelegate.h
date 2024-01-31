@interface VSErrorRecoveryAttempterDelegate : NSObject

+ (id)sharedDelegate;

- (void)didPresentErrorWithRecovery:(BOOL)a0 contextInfo:(void *)a1;

@end
