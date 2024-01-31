@class NSString, NSMutableDictionary;
@protocol CalMigrationAccount;

@interface CalChangeFilteringMigrationAccount : NSObject <CalMigrationAccount> {
    NSString *_accountTypeIdentifier;
    NSString *_accountIdentifier;
}

@property (readonly, nonatomic) NSMutableDictionary *modifiedPropertyValues;
@property (readonly, nonatomic) id<CalMigrationAccount> backingAccount;
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
- (id)initWithBackingAccount:(id)a0;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithAccountIdentifier:(id)a0 accountTypeIdentifier:(id)a1;
- (void)setAuthenticationTypeNone;
- (void)setAuthenticationTypeParent;

@end
