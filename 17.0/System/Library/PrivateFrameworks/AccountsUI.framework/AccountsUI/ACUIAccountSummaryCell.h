@class NSSet, NSString, UILabel, ACAccount;

@interface ACUIAccountSummaryCell : PSTableCell {
    long long _style;
    UILabel *_dataclassesLabel;
    NSSet *_enabledDataclasses;
    NSSet *_supportedDataclasses;
    ACAccount *_account;
    BOOL _useCustomDetailsText;
    NSString *_desiredValue;
}

+ (void)_configureSpecifier:(id)a0 forAccount:(id)a1 withStyle:(long long)a2 valueText:(id)a3;
+ (id)_nameForAccountSpecifier:(id)a0 withStyle:(long long)a1;
+ (id)_valueForCellSpecifier:(id)a0;
+ (id)specifierWithStyle:(long long)a0 account:(id)a1 detailControllerClass:(Class)a2 presentationStyle:(long long)a3;
+ (id)specifierWithStyle:(long long)a0 account:(id)a1 target:(id)a2 controllerLoadAction:(SEL)a3;
+ (id)specifierWithStyle:(long long)a0 account:(id)a1 valueText:(id)a2 detailControllerClass:(Class)a3 presentationStyle:(long long)a4;

- (id)_font;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)_numberFormatter;
- (id)_dataclassesLabel;
- (id)_enabledDataclassesTextForWidth:(double)a0;
- (void)hideDataclass:(id)a0;

@end
