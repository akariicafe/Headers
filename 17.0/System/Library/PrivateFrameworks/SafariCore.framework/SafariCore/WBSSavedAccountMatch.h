@class WBSAutoFillPasskey, NSString, WBSSavedAccount, NSDate, NSURLProtectionSpace, WBSSavedAccountContext;

@interface WBSSavedAccountMatch : NSObject

@property (nonatomic) BOOL hasUniqueHostAndUser;
@property (readonly, nonatomic) NSString *user;
@property (readonly, nonatomic) NSString *host;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastUsedDateAffectingAutoFillSortOrder;
@property (readonly, nonatomic) NSString *customTitle;
@property (readonly, copy, nonatomic) NSString *groupName;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) NSURLProtectionSpace *protectionSpace;
@property (readonly, nonatomic) WBSSavedAccountContext *context;
@property (readonly, nonatomic) long long matchLevel;
@property (readonly, copy, nonatomic) WBSAutoFillPasskey *autoFillPasskey;

- (long long)compare:(id)a0;
- (id)completion;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithSavedAccount:(id)a0 protectionSpace:(id)a1 context:(id)a2 matchLevel:(long long)a3;
- (id)initWithSavedAccount:(id)a0 protectionSpace:(id)a1 context:(id)a2 matchLevel:(long long)a3 autoFillPasskey:(id)a4;
- (id)userVisibleDomainForAutoFillWithPageURL:(id)a0;

@end
