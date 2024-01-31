@class PSSpecifier;

@interface STIncludeWebsiteDataGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *toggleIncludeWebsiteDataSpecifier;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)setCoordinator:(id)a0;
- (id)includeWebsiteData:(id)a0;
- (void)setIncludeWebsiteData:(id)a0 specifier:(id)a1;

@end
