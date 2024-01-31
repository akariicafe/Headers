@class ACAccount;

@interface AMSBiometricsDisableTask : AMSTask

@property (readonly, nonatomic) ACAccount *account;

- (id)initWithAccount:(id)a0;
- (id)perform;
- (void).cxx_destruct;

@end
