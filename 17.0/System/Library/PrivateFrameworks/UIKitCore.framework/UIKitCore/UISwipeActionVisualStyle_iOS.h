@class UIColor, NSString;

@interface UISwipeActionVisualStyle_iOS : NSObject <UISwipeActionVisualStyle>

@property (readonly, nonatomic) unsigned long long defaultCollectionViewCompositionalLayoutSwipeStyle;
@property (readonly, nonatomic) double defaultButtonWidth;
@property (readonly, nonatomic) double maxButtonWidth;
@property (readonly, nonatomic) unsigned long long maxLines;
@property (readonly, nonatomic) double minFontSize;
@property (readonly, nonatomic) double maxFontSize;
@property (readonly, nonatomic) double titleFontWeight;
@property (readonly, nonatomic) double horizontalPadding;
@property (readonly, nonatomic) double iconToTitleSpacing;
@property (readonly, nonatomic) UIColor *defaultTintColor;
@property (readonly, nonatomic) UIColor *defaultButtonBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)defaultContentHeightForView:(id)a0;
- (double)interitemButtonCornerRadiusForStyle:(unsigned long long)a0;
- (unsigned long long)defaultSwipeActionUIStyleForUITableViewStyle:(long long)a0;
- (double)buttonCornerRadiusForStyle:(unsigned long long)a0 view:(id)a1;
- (double)interButtonPaddingForStyle:(unsigned long long)a0;
- (double)paddingToSwipeViewForStyle:(unsigned long long)a0;

@end
