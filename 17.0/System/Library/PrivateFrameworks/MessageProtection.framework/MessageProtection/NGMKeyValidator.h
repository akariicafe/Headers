@interface NGMKeyValidator : NSObject

+ (unsigned long long)validatorLength;
+ (BOOL)isValidKeyValidator:(id)a0 receiversIdentity:(id)a1 sendersIdentity:(id)a2 error:(id *)a3;
+ (id)keyValidatorWithReceiversIdentity:(id)a0 sendersIdentity:(id)a1;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOnPublicKey;
+ (id)versionByte;

@end
