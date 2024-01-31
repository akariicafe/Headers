@interface GameCenterUI.ProfilePrivacyView : GameCenterUI.OnboardingTemplateView <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ iconImage;
    void /* unknown type, empty encoding */ isUnderage;
    void /* unknown type, empty encoding */ primaryTrayButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableData;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_tableHeightAnchor;
    void /* unknown type, empty encoding */ selectedPrivacyChoiceIndex;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)primaryAction;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;

@end
