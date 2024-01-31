@class NSString, PKPaymentRequest;

@interface PKPaymentRequestValidator : NSObject <PKPaymentValidating> {
    PKPaymentRequest *_request;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)validatedClass;
+ (id)validatorWithObject:(id)a0;

- (BOOL)isValidWithError:(id *)a0;
- (void).cxx_destruct;
- (id)initWithPaymentRequest:(id)a0;
- (unsigned long long)_checkAmount:(id)a0;
- (BOOL)_checkMultiTokenTotal:(id)a0 withAPIType:(long long)a1 error:(id *)a2;
- (BOOL)_checkTotal:(id)a0 withAPIType:(long long)a1 error:(id *)a2;
- (id)_errorDescriptionFromMultiTokenContextAmountValidationResult:(unsigned long long)a0 withAPIType:(long long)a1;
- (id)_errorDescriptionFromTotalAmountValidationResult:(unsigned long long)a0 withAPIType:(long long)a1;
- (BOOL)isValidWithAPIType:(long long)a0 withError:(id *)a1;

@end
