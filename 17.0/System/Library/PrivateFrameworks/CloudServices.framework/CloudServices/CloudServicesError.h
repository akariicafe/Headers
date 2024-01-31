@interface CloudServicesError : NSObject

+ (id)errorWithCode:(long long)a0 format:(id)a1;
+ (id)errorWithDomain:(id)a0 code:(long long)a1 format:(id)a2;
+ (long long)codeForNSError:(id)a0;
+ (id)errorWithCode:(long long)a0 error:(id)a1 URL:(id)a2 format:(id)a3;
+ (long long)codeForErrno:(long long)a0;
+ (id)errorForNSError:(id)a0 path:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 URL:(id)a1 format:(id)a2;
+ (id)errorWithCode:(long long)a0 error:(id)a1 format:(id)a2;

@end
