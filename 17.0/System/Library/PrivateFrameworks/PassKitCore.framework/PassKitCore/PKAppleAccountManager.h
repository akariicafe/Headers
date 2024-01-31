@class PKAppleAccountInformation, ACAccountStore;

@interface PKAppleAccountManager : NSObject {
    ACAccountStore *_accountStore;
}

@property (readonly, nonatomic) PKAppleAccountInformation *appleAccountInformation;
@property (readonly, nonatomic) ACAccountStore *accountStore;

+ (id)sharedInstance;

- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_primaryAppleAccount;
- (id)_aidaAccount;

@end
