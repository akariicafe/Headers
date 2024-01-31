@interface _SFSiteIcon : NSObject

+ (long long)_defaultIconSize;
+ (struct CGSize { double x0; double x1; })sizeForIconSize:(long long)a0;
+ (double)fontPointSizeForIconSize:(long long)a0;
+ (id)defaultIconKeyColor;
+ (double)cornerRadius;
+ (id)defaultGlyph;
+ (struct CGSize { double x0; double x1; })defaultSize;
+ (double)labelWidthForIconSize:(long long)a0;
+ (struct CGSize { double x0; double x1; })minimumAcceptableSizeForDownloadedIcon;
+ (id)precompositedDefaultIcon;

@end
