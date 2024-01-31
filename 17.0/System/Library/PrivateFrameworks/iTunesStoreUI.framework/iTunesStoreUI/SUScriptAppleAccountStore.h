@class SUScriptAppleAccount, NSString, ACAccountStore;

@interface SUScriptAppleAccountStore : SUScriptObject {
    ACAccountStore *_accountStore;
    NSString *_effectiveBundleID;
}

@property (readonly) SUScriptAppleAccount *activeStoreAccount;
@property (readonly) NSString *effectiveBundleID;
@property (readonly) SUScriptAppleAccount *primaryAppleAccount;
@property (readonly) NSString *accessPurposeRead;
@property (readonly) NSString *accessPurposeReadWrite;
@property (readonly) NSString *accessPurposeWrite;
@property (readonly) NSString *accountTypeIdentifierFacebook;
@property (readonly) NSString *accountTypeIdentifierSinaWeibo;
@property (readonly) NSString *accountTypeIdentifierTwitter;
@property (readonly) long long renewResultFailed;
@property (readonly) long long renewResultRejected;
@property (readonly) long long renewResultRenewed;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_accountStore;
- (void)setEffectiveBundleID:(id)a0;
- (id)accountTypeWithIdentifier:(id)a0;
- (id)_className;
- (id)attributeKeys;
- (id)accountsWithAccountType:(id)a0;
- (void)_accountStoreChangeNotification:(id)a0;
- (id)scriptAttributeKeys;
- (id)makeClientAccessInfoWithAccountType:(id)a0;
- (void)renewCredentialsForAccount:(id)a0 completionHandler:(id)a1;
- (void)requestAccessWithInfo:(id)a0 completionHandler:(id)a1;

@end
