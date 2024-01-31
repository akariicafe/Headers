@interface AMDMegadomeIntegration : NSObject

+ (id)run:(id)a0 usingView:(id)a1 andDb:(id)a2 returnColumnMajor:(BOOL)a3 returnRowMajor:(BOOL)a4 withError:(id *)a5;
+ (id)handleJSRequest:(id)a0 error:(id *)a1;
+ (id)save:(id)a0 into:(id)a1 inDb:(id)a2 withError:(id *)a3;

@end
