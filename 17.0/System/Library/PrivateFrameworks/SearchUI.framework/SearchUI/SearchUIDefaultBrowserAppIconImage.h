@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage

+ (id)defaultBrowserBundleIdentifier;
+ (void)invalidateDefaultBrowserBundleIdentifier;

- (id)initWithVariant:(unsigned long long)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
