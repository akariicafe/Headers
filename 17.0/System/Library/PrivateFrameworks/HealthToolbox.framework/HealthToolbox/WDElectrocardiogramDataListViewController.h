@interface WDElectrocardiogramDataListViewController : WDDataListViewController {
    long long _mode;
}

- (id)initWithDisplayType:(id)a0 profile:(id)a1 dataProvider:(id)a2 usingInsetStyling:(BOOL)a3 mode:(long long)a4;
- (BOOL)isEditEnabled;

@end
