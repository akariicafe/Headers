@interface TeaUI.LegacySectionViewController : UIViewController {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ sectionTitleColor;
    void /* unknown type, empty encoding */ isSectionSelectorHidden;
    void /* unknown type, empty encoding */ autoHideSectionSelector;
    void /* unknown type, empty encoding */ toolbarManager;
    void /* unknown type, empty encoding */ sectionSelectorView;
    void /* unknown type, empty encoding */ currentSection;
    void /* unknown type, empty encoding */ scrollViewProxyManager;
    void /* unknown type, empty encoding */ barCompressionManager;
}

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
