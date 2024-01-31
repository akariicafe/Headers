@interface HROnboardingInlineExpandedContentView : UIView

@property (nonatomic) long long currentUserInterfaceStyle;

+ (id)_badgeFont;
+ (id)_bodyFont;
+ (id)_headingLabelWithLocalizedText:(id)a0;
+ (double)_badgeFontDistance;
+ (id)_badgeFontTextStyle;
+ (id)_badgeLabelWithLocalizedText:(id)a0;
+ (double)_bodyFontDistance;
+ (id)_bodyFontTextStyle;
+ (id)_bodyLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (id)_bodyLabelWithLocalizedText:(id)a0;
+ (id)_bulletedTextViewWithLocalizationKey:(id)a0;
+ (id)_headingBodyFont;
+ (double)_headingBodyFontDistance;
+ (id)_headingLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (double)_headingToBadgeFontDistance;
+ (id)_learnMoreListLabelWithLocalizedText:(id)a0 URLIdentifier:(long long)a1 delegate:(id)a2;
+ (double)_listFontDistance;
+ (id)_listLabelWithAtrialFibrillationLocalizationKey:(id)a0;
+ (id)_listLabelWithLocalizedText:(id)a0;
+ (id)_makeViewWithContentItem:(id)a0;
+ (id)_spacingBetweenItems:(id)a0;
+ (id)learnMoreAboutAtrialFibrillationExpandedView;
+ (id)viewWithItems:(id)a0;

@end
