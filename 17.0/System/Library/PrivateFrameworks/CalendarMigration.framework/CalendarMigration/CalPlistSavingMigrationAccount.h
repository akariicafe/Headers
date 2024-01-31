@class NSString, NSMutableDictionary;
@protocol CalMigrationReadOnlyAccount;

@interface CalPlistSavingMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
}

@property (readonly, nonatomic) id<CalMigrationReadOnlyAccount> backingAccount;
@property (readonly, nonatomic) NSMutableDictionary *savedProperties;
@property (readonly, nonatomic) NSMutableDictionary *modifiedProperties;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *parentAccountIdentifier;
@property (readonly, nonatomic) BOOL dirty;
@property (retain, nonatomic) NSString *accountDescription;
@property (nonatomic) BOOL enabledForCalendarsDataClass;
@property (nonatomic) BOOL provisionedForCalendarsDataClass;
@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL authenticated;
@property (retain, nonatomic) NSString *username;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountTypeIdentifier;
- (void)setAccountProperty:(id)a0 forKey:(id)a1;
- (void)setPassword:(id)a0;
- (id)accountPropertyForKey:(id)a0;
- (void)save;
- (void).cxx_destruct;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;
- (id)initWithIdentifier:(id)a0 accountTypeIdentifier:(id)a1 backingAccount:(id)a2 initialProperties:(id)a3;

@end
