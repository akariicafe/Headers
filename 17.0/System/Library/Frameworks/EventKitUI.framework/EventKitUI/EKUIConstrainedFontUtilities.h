@interface EKUIConstrainedFontUtilities : NSObject

+ (void)initialize;
+ (void)clearFontCaches;
+ (id)constrainedBodyBoldTextLabelFont;
+ (id)constrainedBodyTextLabelFont;
+ (id)constrainedCaption1TextLabelFont;
+ (id)constrainedFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1 addingSymbolicTraits:(unsigned int)a2 traitCollection:(id)a3;
+ (id)constrainedFontForTextStyle:(id)a0 maximumContentSizeCategory:(id)a1 traitCollection:(id)a2;
+ (id)constrainedFontForTextStyle:(id)a0 minimumContentSizeCategory:(id)a1 maximumContentSizeCategory:(id)a2 traitCollection:(id)a3;
+ (id)constrainedFontForTextStyle:(id)a0 minimumContentSizeCategory:(id)a1 traitCollection:(id)a2;
+ (long long)tableViewCellCappedSymbolImageScaleWithScale:(long long)a0 traitCollection:(id)a1;

@end
