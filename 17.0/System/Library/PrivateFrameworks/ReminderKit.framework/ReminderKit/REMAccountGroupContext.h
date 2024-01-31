@class REMAccount;

@interface REMAccountGroupContext : NSObject

@property (retain, nonatomic) REMAccount *account;

- (id)initWithAccount:(id)a0;
- (void).cxx_destruct;
- (id)fetchGroupsWithError:(id *)a0;

@end
