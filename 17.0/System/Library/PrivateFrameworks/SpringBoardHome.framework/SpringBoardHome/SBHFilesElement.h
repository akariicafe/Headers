@interface SBHFilesElement : SBHCustomIconElement

+ (id)elementIdentifier;
+ (id)elementKind;

- (unsigned long long)supportedGridSizeClassesForIcon:(id)a0;
- (id)containerBundleIdentifier;
- (id)icon:(id)a0 imageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a1;
- (id)configurationStorageIdentifier;
- (BOOL)iconSupportsRasterization:(id)a0;
- (id)displayName;
- (BOOL)iconSupportsConfiguration:(id)a0;

@end
