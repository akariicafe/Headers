@class NSArray;

@interface AMSSignOutTask : AMSTask

@property (retain, nonatomic) NSArray *accounts;

+ (id)_signOutOfAccount:(id)a0;

- (void).cxx_destruct;
- (id)performTask;
- (id)initWithAccounts:(id)a0;

@end
