@interface SearchUIAppIconUtilities : NSObject

+ (struct CGSize { double x0; double x1; })appIconItemSize;
+ (double)distanceToTopOfAppIconsForMultiResultCell;
+ (double)idealHorizontalSpacingBetweenAppIcons;
+ (double)idealHorizontalSpacingBetweenAppIconsForContainerWidth:(double)a0 insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
+ (long long)numberOfAppIconsPerRow;
+ (double)preferredHorizontalPlatterInsetForAppIcons;

@end
