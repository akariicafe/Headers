@class NSSet, ACAccount, NSString;

@interface TRCompanionAuthOperation : TROperation

@property (retain, nonatomic) ACAccount *account;
@property (retain, nonatomic) NSSet *targetedServices;
@property (nonatomic) BOOL shouldUseAIDA;
@property (nonatomic) BOOL isCLIMode;
@property (retain, nonatomic) NSString *rawPassword;

- (void)execute;
- (void).cxx_destruct;
- (void)_handleResponse:(id)a0;

@end
