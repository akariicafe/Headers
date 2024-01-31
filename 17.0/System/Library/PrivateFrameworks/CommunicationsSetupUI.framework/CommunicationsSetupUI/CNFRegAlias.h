@class NSString, IMAccount, NSDate;

@interface CNFRegAlias : NSObject

@property (copy, nonatomic) NSString *alias;
@property (retain, nonatomic) IMAccount *account;
@property (nonatomic) long long givenAliasType;
@property (copy, nonatomic) NSString *deviceAliasIdentifier;
@property (nonatomic, getter=isSelectedDeviceAlias) BOOL selectedDeviceAlias;
@property (nonatomic) BOOL isTemporary;
@property (copy, nonatomic) NSDate *_expirationDate;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, retain, nonatomic) NSString *identifier;

- (BOOL)validate;
- (unsigned long long)hash;
- (id)identifier;
- (id)description;
- (long long)validationStatus;
- (void)setDisplayName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (long long)type;
- (long long)localizedCaseInsensitiveCompare:(id)a0;
- (id)initWithAccount:(id)a0 alias:(id)a1;
- (id)initWithAlias:(id)a0 type:(long long)a1 selected:(BOOL)a2 deviceAliasIdentifier:(id)a3;
- (BOOL)isDeviceAlias;
- (BOOL)isLocalPhoneNumberAlias;
- (BOOL)isPhoneNumberAliasOnPhoneNumberAccount;
- (BOOL)isTemporaryPhoneNumberAlias;
- (long long)validationErrorReason;

@end
