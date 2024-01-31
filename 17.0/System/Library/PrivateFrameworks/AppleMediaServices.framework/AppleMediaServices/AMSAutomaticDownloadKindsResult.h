@class NSArray, ACAccount;

@interface AMSAutomaticDownloadKindsResult : NSObject

@property (readonly, nonatomic) ACAccount *account;
@property (readonly, nonatomic) NSArray *enabledMediaKinds;

- (void).cxx_destruct;
- (id)initWithAccount:(id)a0 andEnabledMediaKinds:(id)a1;

@end
