@class NSString;

@interface HRAccountUpgradeTileCell : UITableViewCell {
    void /* unknown type, empty encoding */ profile;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ accounts;
    void /* unknown type, empty encoding */ cancellable;
    void /* unknown type, empty encoding */ tileView;
}

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, readonly) BOOL hasUpgradableAccounts;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)reloadDataSource;
- (id)initWithProfile:(id)a0 presentingViewController:(id)a1;

@end
