@interface SwiftUI.ListTableViewHeaderFooter : UITableViewHeaderFooterView {
    void /* unknown type, empty encoding */ viewListID;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ isDisplaying;
    void /* unknown type, empty encoding */ outlineRootSeed;
}

@property (nonatomic) BOOL isAccessibilityElement;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_bridgedUpdateConfigurationUsingState:(id)a0;

@end
