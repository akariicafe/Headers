@class VSOptional, AKAnisetteProvisioningController;

@interface VSVerificationDataOperation : VSAsyncOperation

@property (retain) VSOptional *result;
@property (retain, nonatomic) AKAnisetteProvisioningController *provisioningController;

- (id)init;
- (void)_finishWithData:(id)a0;
- (void)executionDidBegin;
- (void).cxx_destruct;
- (void)_finishWithError:(id)a0;
- (void)_finishWithResult:(int)a0 bytes:(char *)a1 length:(unsigned int)a2;

@end
