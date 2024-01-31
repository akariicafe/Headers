@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {
    SSAccount *_account;
}

@property (retain) SSAccount *account;
@property (copy) NSString *credits;
@property (retain) NSNumber *dsID;
@property (copy) NSString *identifier;
@property (readonly) NSString *ITunesPassSerialNumber;
@property (copy) NSString *kind;
@property (readonly, getter=isPrimaryLockerAccount) id primaryLockerAccount;
@property (retain) id lockerEnabled;
@property (retain) id purchaseHistoryEnabled;
@property (retain) id socialEnabled;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (void)setSecureToken:(id)a0;
- (BOOL)isPrimaryAccount;
- (BOOL)isManagedAppleID;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_commitChanges;
- (void)_setServiceType:(long long)a0 enabled:(id)a1;
- (BOOL)isSecureTokenValid;

@end
