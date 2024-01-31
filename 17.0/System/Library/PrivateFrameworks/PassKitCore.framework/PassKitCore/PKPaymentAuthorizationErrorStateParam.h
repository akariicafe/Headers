@class NSError;

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam

@property (retain, nonatomic) NSError *error;
@property (nonatomic, getter=isClientFailure) BOOL clientFailure;

+ (id)paramWithError:(id)a0;
+ (id)paramWithError:(id)a0 clientFailure:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;

@end
