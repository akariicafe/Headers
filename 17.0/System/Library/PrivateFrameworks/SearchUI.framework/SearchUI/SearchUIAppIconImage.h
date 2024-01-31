@class NSString;

@interface SearchUIAppIconImage : SearchUIImage

@property (nonatomic) unsigned long long variant;
@property (retain) NSString *bundleIdentifier;

+ (struct CGSize { double x0; double x1; })sizeForVariant:(unsigned long long)a0;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForBundleIdentifier:(id)a0 variant:(unsigned long long)a1 contentType:(id)a2;
+ (id)appIconForImage:(id)a0 variant:(unsigned long long)a1;
+ (id)appIconForResult:(id)a0 variant:(unsigned long long)a1;
+ (unsigned long long)bestVariantForSize:(struct CGSize { double x0; double x1; })a0;
+ (id)descriptorNameForVariant:(unsigned long long)a0;
+ (int)iconFormatForVariant:(unsigned long long)a0;
+ (id)imageForIcon:(id)a0 descriptor:(id)a1;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)uniqueIdentifier;
- (BOOL)isEqual:(id)a0;
- (id)loadImageWithScale:(double)a0 isDarkStyle:(BOOL)a1;
- (void)appIconWillChange:(id)a0;
- (int)defaultCornerRoundingStyle;
- (id)generateImageWithFormat:(int)a0 scale:(double)a1;
- (id)initWithBundleIdentifier:(id)a0 variant:(unsigned long long)a1 contentType:(id)a2;
- (void)invalidateAppIcon;
- (BOOL)needsTinting;
- (BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)a0;

@end
