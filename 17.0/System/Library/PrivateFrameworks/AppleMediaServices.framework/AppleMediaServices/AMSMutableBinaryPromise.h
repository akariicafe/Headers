@interface AMSMutableBinaryPromise : AMSBinaryPromise

+ (BOOL)cancelPromise:(id)a0;
+ (BOOL)finishPromise:(id)a0 withSuccess:(BOOL)a1;
+ (BOOL)finishPromise:(id)a0 withPromise:(id)a1;
+ (BOOL)finishPromise:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
+ (BOOL)finishPromise:(id)a0 withError:(id)a1;

- (BOOL)finishWithSuccess;
- (BOOL)finishWithSuccess:(BOOL)a0 error:(id)a1;
- (BOOL)cancel;
- (BOOL)finishWithPromise:(id)a0;
- (BOOL)finishWithError:(id)a0;

@end
