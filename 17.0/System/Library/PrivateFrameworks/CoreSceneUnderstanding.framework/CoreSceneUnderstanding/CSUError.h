@interface CSUError : NSError

+ (id)errorForOSStatus:(int)a0 localizedDescription:(id)a1;
+ (id)errorForMemoryAllocationFailureWithLocalizedDescription:(id)a0;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1 underlyingError:(id)a2;
+ (void)logInternalError:(id)a0;
+ (id)errorForMemoryAllocationFailure;
+ (id)errorForEspressoReturnStatus:(int)a0 localizedDescription:(id)a1;
+ (id)errorForEspressoErrorInfo:(struct { int x0; int x1; char *x2; })a0 localizedDescription:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)errorForInvalidArgument:(id)a0 named:(id)a1;
+ (id)errorForInvalidModelWithLocalizedDescription:(id)a0;
+ (id)errorForFailedEspressoPlan:(void *)a0 localizedDescription:(id)a1;
+ (id)errorForInvalidArgumentWithLocalizedDescription:(id)a0;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)a0 underlyingError:(id)a1;
+ (id)errorForInternalErrorWithLocalizedDescription:(id)a0;
+ (id)errorForUnknownErrorWithLocalizedDescription:(id)a0;
+ (id)errorForDataUnavailableWithLocalizedDescription:(id)a0;
+ (void)CSUAssert:(BOOL)a0 log:(id)a1;
+ (id)errorForUnsupportedRevision:(id)a0;

@end
