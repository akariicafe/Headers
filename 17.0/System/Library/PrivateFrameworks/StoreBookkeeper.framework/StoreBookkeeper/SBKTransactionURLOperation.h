@class SBKRequest;

@interface SBKTransactionURLOperation : ISStoreURLOperation

@property (nonatomic) BOOL shouldAuthenticate;
@property (retain, nonatomic) SBKRequest *SBKRequest;

+ (id)operationWithRequest:(id)a0 delegate:(id)a1;

- (id)init;
- (id)_init;
- (id)description;
- (void).cxx_destruct;

@end
