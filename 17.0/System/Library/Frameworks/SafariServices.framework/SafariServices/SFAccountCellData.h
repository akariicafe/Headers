@class WBSPasswordWarning, WBSSavedAccount, NSString;

@interface SFAccountCellData : NSObject {
    unsigned long long _savedAccountHash;
    unsigned long long _warningHash;
}

@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (readonly, nonatomic) WBSPasswordWarning *warning;
@property (readonly, copy, nonatomic) NSString *effectiveTitle;
@property (readonly, copy, nonatomic) NSString *effectiveTitleForSorting;
@property (readonly, copy, nonatomic) NSString *highLevelDomain;
@property (readonly, copy, nonatomic) NSString *searchPattern;
@property (readonly, nonatomic) BOOL savedAccountIsOnlySavedAccountForHighLevelDomain;

+ (id)accountCellDataWithSavedAccount:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)a3;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSavedAccount:(id)a0 warning:(id)a1 searchPattern:(id)a2 savedAccountIsOnlySavedAccountForHighLevelDomain:(BOOL)a3;

@end
